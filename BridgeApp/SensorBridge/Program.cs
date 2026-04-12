using System;
using System.Collections.Generic;
using System.Text.Json;
using LibreHardwareMonitor.Hardware;

class Program
{
    static void Main()
    {
        var computer = new Computer()
        {
            IsCpuEnabled = true,
            IsGpuEnabled = true
        };

        computer.Open();

        string cpuName = "";
        float cpuTemp = 0;
        float cpuUsage = 0;
        float cpuSpeed = 0;

        var gpuList = new List<object>();

        foreach (var hardware in computer.Hardware)
        {
            UpdateHardware(hardware);

            // ================= CPU =================
            if (hardware.HardwareType == HardwareType.Cpu)
            {
                cpuName = hardware.Name;

                float totalTemp = 0;
                int tempCount = 0;

                // 🔥 CPU TEMP (filtered average)
                foreach (var sensor in hardware.Sensors)
                {
                    if (sensor.Value.HasValue && sensor.Name.Contains("Core #"))
                    {
                        float val = sensor.Value.Value;

                        // filter unrealistic spikes
                        if (val > 30 && val < 85)
                        {
                            totalTemp += val;
                            tempCount++;
                        }
                    }
                }

                if (tempCount > 0)
                {
                    cpuTemp = totalTemp / tempCount;
                }

                // 🔥 CPU USAGE
                foreach (var sensor in hardware.Sensors)
                {
                    if (sensor.SensorType == SensorType.Load &&
                        sensor.Name.Contains("Total"))
                    {
                        cpuUsage = sensor.Value ?? 0;
                        break;
                    }
                }

                // 🔥 CPU SPEED (FIXED - average of all cores)
                // 🔥 CPU SPEED (FINAL FIX)
                float bestClock = 0;
            
                foreach (var sensor in hardware.Sensors)
                {
                    if (sensor.SensorType == SensorType.Clock && sensor.Value.HasValue)
                    {
                        float val = sensor.Value.Value;

                        // filter realistic CPU clocks
                        if (val > 500 && val < 6000)
                        {
                            if (val > bestClock)
                                bestClock = val;
                        }
                    }
                }

                cpuSpeed = bestClock;
            }
            // ================= GPU =================
            if (hardware.HardwareType == HardwareType.GpuAmd ||
                hardware.HardwareType == HardwareType.GpuNvidia ||
                hardware.HardwareType == HardwareType.GpuIntel)
            {
                float gpuTemp = 0;
                float gpuUsage = 0;
                float gpuSpeed = 0;

                // 🔥 GPU TEMP (prefer core)
                foreach (var sensor in hardware.Sensors)
                {
                    if (sensor.SensorType == SensorType.Temperature &&
                        sensor.Value.HasValue &&
                        sensor.Name.Contains("GPU Core"))
                    {
                        gpuTemp = sensor.Value.Value;
                        break;
                    }
                }

                // fallback (AMD etc.)
                if (gpuTemp == 0)
                {
                    foreach (var sensor in hardware.Sensors)
                    {
                        if (sensor.SensorType == SensorType.Temperature &&
                            sensor.Value.HasValue &&
                            (sensor.Name.Contains("Core") || sensor.Name.Contains("SoC")))
                        {
                            gpuTemp = sensor.Value.Value;
                            break;
                        }
                    }
                }

                // 🔥 GPU USAGE
                foreach (var sensor in hardware.Sensors)
                {
                    if (sensor.SensorType == SensorType.Load &&
                        sensor.Name.Contains("Core"))
                    {
                        gpuUsage = sensor.Value ?? 0;
                        break;
                    }
                }

                // 🔥 GPU SPEED
                foreach (var sensor in hardware.Sensors)
                {
                    if (sensor.SensorType == SensorType.Clock &&
                        sensor.Value.HasValue &&
                        sensor.Name.Contains("Core"))
                    {
                        gpuSpeed = sensor.Value.Value;
                        break;
                    }
                }

                gpuList.Add(new
                {
                    name = hardware.Name,
                    temp = gpuTemp,
                    usage = gpuUsage,
                    speed = gpuSpeed
                });
            }
        }

        var result = new
        {
            cpu = new
            {
                name = cpuName,
                temp = cpuTemp,
                usage = cpuUsage,
                speed = cpuSpeed
            },
            gpus = gpuList
        };

        Console.WriteLine(JsonSerializer.Serialize(result));
        Console.Out.Flush();
    }

    static void UpdateHardware(IHardware hardware)
    {
        hardware.Update();

        foreach (var sub in hardware.SubHardware)
        {
            UpdateHardware(sub);
        }
    }
}