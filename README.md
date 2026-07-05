# WinPower Control Center

A lightweight, open-source control center for Windows devices, focused on power management and real-time hardware monitoring. Built as a learning project aimed at eventually replacing bloated OEM utilities.

---

## 🚀 Current Status

⚠️ Work in Progress (Active Development) — v0.5

---

## ✨ Features (v0.5)

- Real-time CPU & GPU monitoring (async, no UI freezing)
- Multi-GPU support (iGPU + dGPU)
- CPU temperature via WMI Thermal Zone
- CPU clock speed via Windows Performance Counters
- Windows Power Scheme control:
  - Eco
  - Balanced
  - Performance
  - Ultimate Performance (with auto-detection and enable support)
- Windows Power Mode Overlay control:
  - Best Efficiency
  - Balanced
  - Best Performance
- Power scheme and overlay controlled independently
- Auto-elevation to admin on launch (UAC prompt)
- Detects current power scheme and overlay on startup
- Responsive Qt-based UI

---

## 📦 Versions

### 🔹 v0.5 (Latest)
**Sensor Accuracy + Power Overlay + Async Monitoring**

#### ✨ New:
- Windows Power Mode Overlay support (Best Efficiency / Balanced / Best Performance)
- Power scheme and overlay are independent controls
- Auto-elevation to admin on launch — no more manual "Run as Admin"
- CPU temperature now reads via WMI Thermal Zone
- CPU speed via Windows Performance Counters (matches Task Manager)
- CPU usage via `% Processor Utility` (more accurate on modern AMD CPUs)
- Async sensor reading via QtConcurrent — UI no longer freezes during updates

#### 🛠 Fixes:
- Fixed UI freeze caused by SensorBridge blocking the main thread
- Fixed Ultimate Performance mode detection and apply bug
- Fixed infinite UAC relaunch loop
- Fixed iGPU usage sensor (was stuck at 1%)
- Fixed overlay mode not being detected on startup
- Fixed `updateModeUI()` being called before `ultSupport` was initialized

#### ⚠ Known Limitations:
- CPU speed and usage readings are slightly less accurate on battery
  (Windows throttles Performance Counters on DC power)
- Fan speed reading not yet implemented
- CPU temperature uses WMI thermal zone, not direct SMU access

---

### 🔹 v0.4
**Hardware Monitoring + Stability Update**

#### ✨ New:
- Integrated real hardware monitoring using SensorBridge (C# + LibreHardwareMonitor)
- CPU usage, temperature, and clock speed
- GPU temperature, usage, and clock speed
- Multi-GPU detection and dynamic handling
- Removed all simulated data

#### 🛠 Fixes:
- Fixed console window appearing on admin relaunch
- Improved process handling (silent background execution)

#### ⚠ Known Limitations:
- CPU temperature approximate on some AMD Ryzen laptops
- Fan speed not implemented

---

### 🔹 v0.3.2
- Crash fixes, UI cleanup, build fixes, version handling

### 🔹 v0.3.1
- Fixed Ultimate Performance detection, improved compatibility

### 🔹 v0.3
- Power mode switching, system power plan detection, auto-sync, admin handling, simulated hardware values

### 🔹 v0.2
- First real system integration, powercfg-based control

### 🔹 v0.1
- Initial prototype, simulated values, basic UI

---

## ▶️ How to Run

### Option A — Portable (recommended)
1. Download `WinPowerControlCenter-v0.5-win64.zip` from Releases
2. Extract anywhere
3. Run `WinPowerControlCenter.exe`
4. Accept the UAC prompt — admin is required for sensor reading and power control

### Option B — Build from source
1. Clone the repo
2. Open in Qt Creator (Qt 6.5+, MinGW 64-bit)
3. Build the SensorBridge:
   >> cd BridgeApp/SensorBridge
   >> dotnet build
4. Copy `SensorBridge.exe` and `LibreHardwareMonitorLib.dll` to your Qt build folder
5. Build and run `WinPowerControlCenter` from Qt Creator

---

## 🧠 Architecture
main.cpp
↓ checks admin (manageadmin.cpp)
↓ relaunches with UAC if needed (--elevated flag prevents loop)
↓ creates MainWindow
MainWindow (mainwindow.cpp)
↓ QTimer fires every 3 seconds
↓ calls HardwareMonitor::fetchStatsAsync()
HardwareMonitor (hardwaremonitor.cpp)
↓ QtConcurrent::run() → background thread
↓ launches SensorBridge.exe
↓ reads JSON from stdout
↓ emits statsReady(stats) signal → main thread
↓ MainWindow::onStatsReady() updates UI labels
SensorBridge (C# / .NET 4.8)
↓ LibreHardwareMonitor → GPU sensors
↓ WMI Thermal Zone → CPU temperature
↓ Windows Performance Counters → CPU speed + usage
↓ outputs JSON to stdout

### Power Management Flow
Button clicked
↓ changeMode(mode) — MainWindow
↓ monitor.setMode(mode) — updates internal state
↓ monitor.applyPowerMode(mode) — powercfg /setactive
↓ updateModeUI() — highlights active button
Overlay button clicked
↓ changeOverlayMode(mode) — MainWindow
↓ monitor.applyPowerOverlay(mode) — PowerSetActiveOverlayScheme (powrprof.dll)
↓ monitor.setOverlayMode(mode) — updates internal state
↓ updateOverlayUI() — highlights active overlay button

---

## 🛠️ Tech Stack

| Layer | Technology |
|---|---|
| UI | C++, Qt 6 Widgets |
| Build | CMake, MinGW 64-bit |
| Admin handling | Windows API (ShellExecuteEx, CheckTokenMembership) |
| Power scheme | powercfg.exe |
| Power overlay | powrprof.dll (PowerSetActiveOverlayScheme) |
| Sensor bridge | C#, .NET Framework 4.8 |
| Hardware sensors | LibreHardwareMonitor |
| CPU temp | WMI (Win32_PerfRawData_Counters_ThermalZoneInformation) |
| CPU speed/usage | Windows Performance Counters |

---

## 🎯 Roadmap

### 🔸 v0.6
- Persistent SensorBridge (run continuously, no repeated process spawn)
- RAM usage monitoring
- System tray support (minimize to tray)
- Fan RPM reading (where available)
- Battery status and health

### 🔸 v0.7+
- Graphs and performance history
- Per-core CPU monitoring

### 🔸 v1.0 (Goal)
- Lightweight OEM utility replacement
- Startup with Windows
- Device-specific tuning

---

## 📌 Notes

- Requires Windows 10/11
- Requires administrator privileges (prompted automatically on launch)
- SensorBridge.exe must be in the same folder as the main exe
- Designed as a learning + system-level development project

---

## 🙌 Author

Abhishek Kumar - B.Tech Student, The NorthCap University
