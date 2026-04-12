# WinPower Control Center

A lightweight, open-source control center for Windows devices, focused on power management and real-time hardware monitoring.

---

## 🚀 Current Status

⚠️ Work in Progress (Active Development)

---

## ✨ Features (v0.4)

- Real-time CPU & GPU monitoring
- Multi-GPU support (iGPU + dGPU)
- Windows power mode control:
  - Eco
  - Balanced
  - Performance
  - Ultimate Performance
- Detects current system power plan on startup
- Optional sync with Windows power scheme
- Admin privilege detection & UAC relaunch
- "Run as Admin" button
- Clean and responsive Qt-based UI
- Smooth value updates (anti-jump transitions)

---

## 📦 Versions

### 🔹 v0.4 (Latest)

**Hardware Monitoring + Stability Update**

#### ✨ New:
- Integrated real hardware monitoring using SensorBridge
- CPU usage, temperature, and clock speed (admin required)
- GPU temperature, usage, and clock speed
- Multi-GPU detection and dynamic handling
- Removed simulated data

#### 🛠 Improvements:
- Fixed console window appearing on admin relaunch
- Improved process handling (silent background execution)
- More stable UI updates

#### ⚠ Known Limitations:
- CPU temperature may be approximate on some AMD Ryzen laptops
- CPU speed may require administrator privileges for accurate values
- Fan speed not implemented in this version

---

### 🔹 v0.3

**System-aware version with smarter behavior**

- Power mode switching
- System power plan detection
- Auto-sync with Windows
- Admin handling
- Simulated hardware values

---

### 🔹 v0.3.2

- Crash fixes
- UI cleanup
- Build fixes
- Version handling improvements

---

### 🔹 v0.3.1

- Fixed Ultimate Performance detection
- Improved compatibility

---

### 🔹 v0.2

- First real system integration
- Powercfg-based control

---

### 🔹 v0.1

- Initial prototype
- Simulated values
- Basic UI

---

## ▶️ How to Run

1. Build using Qt Creator (Debug or Release)

2. Go to build directory:

3. Run: WinPowerControlCenter.exe

---

## ⚠️ Important Notes

- Some features require **Administrator privileges**
  - Use the **"Run as Admin"** button  
  - OR right-click → Run as administrator  

- If app fails due to missing Qt DLLs: windeployqt WinPowerControlCenter.exe

---

## 🛠️ Tech Stack

- C++
- Qt (Widgets)
- Windows API
- C# (.NET) — SensorBridge
- LibreHardwareMonitor

---

## 🧠 Architecture

Qt App (UI) ↓ 
SensorBridge (C#) ↓ 
LibreHardwareMonitor

---

## 🎯 Planned Features

### 🔸 v0.5
- Improved sensor accuracy
- Persistent background monitoring (no repeated process spawn)
- Better CPU data handling

### 🔸 v0.6+
- Graphs & visualization
- Performance history

### 🔸 v1.0 (Goal)
- Advanced power control
- Fan control (EC-level)
- OEM utility replacement

---

## 📌 Notes

- Designed as a learning + system-level development project
- Focused on lightweight and efficient monitoring

---

## 🙌 Author

Abhishek
