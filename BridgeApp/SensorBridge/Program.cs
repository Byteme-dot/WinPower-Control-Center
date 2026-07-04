using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Management;
using System.Text.Json;
using System.Threading;
using LibreHardwareMonitor.Hardware;

public class UpdateVisitor : IVisitor
{
    public void VisitComputer(IComputer computer) { computer.Traverse(this); }
    public void VisitHardware(IHardware hardware)
    {
        hardware.Update();
        foreach (IHardware subHardware in hardware.SubHardware)
            subHardware.Accept(this);
    }
    public void VisitSensor(ISensor sensor) { }
    public void VisitParameter(IParameter parameter) { }
}

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
        computer.Accept(new UpdateVisitor());

        string cpuName = "";
        float cpuTemp = 0;
        float cpuUsage = 0;
        float cpuSpeed = 0;

        var gpuList = new List<object>();

        foreach (var hardware in computer.Hardware)
        {
            // ================= CPU =================
            if (hardware.HardwareType == HardwareType.Cpu)
            {
                cpuName = hardware.Name;

                // CPU USAGE
                foreach (var sensor in hardware.Sensors)
                {
                    if (sensor.SensorType == SensorType.Load &&
                        sensor.Name == "CPU Total" &&
                        sensor.Value.HasValue)
                    {
                        cpuUsage = sensor.Value.Value;
                        break;
                    }
                }

                // CPU TEMP via Thermal Zone
                try
                {
                    var searcher = new ManagementObjectSearcher(
                        @"root\CIMV2",
                        "SELECT * FROM Win32_PerfRawData_Counters_ThermalZoneInformation"
                    );
                    float highestTemp = 0;
                    foreach (var obj in searcher.Get())
                    {
                        // try both cast types since WMI can return different numeric types
                        double tempK = 0;
                        try { tempK = Convert.ToDouble(obj["Temperature"]); }
                        catch { continue; }

                        float tempC = (float)(tempK - 273.15);
                        if (tempC > 30 && tempC < 110 && tempC > highestTemp)
                            highestTemp = tempC;
                    }
                    if (highestTemp > 0)
                        cpuTemp = highestTemp;
                }
                catch { }

                // CPU SPEED via Performance Counter
                try
                {
                    using (var counter = new PerformanceCounter(
                        "Processor Information",
                        "% Processor Performance",
                        "_Total"
                    ))
                    {
                        counter.NextValue();
                        Thread.Sleep(500);
                        float perfPercent = counter.NextValue();
                        cpuSpeed = (perfPercent / 100f) * 3800f;
                    }
                }
                catch { }
            }

            // ================= GPU =================
            if (hardware.HardwareType == HardwareType.GpuAmd ||
                hardware.HardwareType == HardwareType.GpuNvidia ||
                hardware.HardwareType == HardwareType.GpuIntel)
            {
                float gpuTemp = 0;
                float gpuUsage = 0;
                float gpuSpeed = 0;

                if (hardware.HardwareType == HardwareType.GpuAmd)
                {
                    // iGPU temp
                    foreach (var sensor in hardware.Sensors)
                    {
                        if (sensor.SensorType == SensorType.Temperature &&
                            sensor.Value.HasValue &&
                            sensor.Name.Contains("VR SoC"))
                        {
                            gpuTemp = sensor.Value.Value;
                            break;
                        }
                    }

                    // iGPU usage
                    foreach (var sensor in hardware.Sensors)
                    {
                        if (sensor.SensorType == SensorType.Load &&
                            sensor.Name == "D3D 3D" &&
                            sensor.Value.HasValue)
                        {
                            gpuUsage = sensor.Value.Value;
                            break;
                        }
                    }

                    // iGPU speed
                    foreach (var sensor in hardware.Sensors)
                    {
                        if (sensor.SensorType == SensorType.Clock &&
                            sensor.Name == "GPU Core" &&
                            sensor.Value.HasValue)
                        {
                            gpuSpeed = sensor.Value.Value;
                            break;
                        }
                    }
                }
                else if (hardware.HardwareType == HardwareType.GpuNvidia)
                {
                    // dGPU temp
                    foreach (var sensor in hardware.Sensors)
                    {
                        if (sensor.SensorType == SensorType.Temperature &&
                            sensor.Name == "GPU Core" &&
                            sensor.Value.HasValue)
                        {
                            gpuTemp = sensor.Value.Value;
                            break;
                        }
                    }

                    // dGPU usage
                    foreach (var sensor in hardware.Sensors)
                    {
                        if (sensor.SensorType == SensorType.Load &&
                            sensor.Name == "GPU Core" &&
                            sensor.Value.HasValue)
                        {
                            gpuUsage = sensor.Value.Value;
                            break;
                        }
                    }

                    // dGPU speed
                    foreach (var sensor in hardware.Sensors)
                    {
                        if (sensor.SensorType == SensorType.Clock &&
                            sensor.Name == "GPU Core" &&
                            sensor.Value.HasValue)
                        {
                            gpuSpeed = sensor.Value.Value;
                            break;
                        }
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

        computer.Close();
    }
}