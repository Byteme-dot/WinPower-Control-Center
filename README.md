# WinPower Control Center (WIP)

A custom open-source control center for Windows devices.

This project aims to provide control over system power modes and (in future) real hardware monitoring, while keeping resource usage minimal.

---

## 🚀 Current Status

⚠️ Work in Progress (Learning + Development Project)

---

## 📦 Versions

### 🔹 v0.3 (Latest Major Update)

**System-aware version with smarter behavior**

#### ✨ Features:

* Qt-based UI
* Mode switching:
  * Eco
  * Balanced
  * Performance
  * Ultimate Performance (with fallback handling)
* Detects current Windows power plan on startup
* Auto-sync with system power mode (optional)
* Real-time UI updates when system settings change externally
* Admin privilege detection & UAC relaunch
* "Run as Admin" button
* Power scheme sync toggle (checkbox)
* Dependency-based controls (Auto Sync depends on Power Sync)
* Ultimate Performance:
  * Dynamic detection (no fixed GUID)
  * "Try Enable" fallback button
  * Proper unsupported handling
* Simulated CPU & GPU temperatures
* Simulated fan speeds
* Smooth value transitions (anti-jump)
* Active mode UI feedback
* Button hover & styling improvements

---

### 🔹 v0.3.1 (Bug Fix)

* Fixed Ultimate Performance detection (no longer relies on fixed GUID)
* Improved compatibility across systems with duplicated schemes
* Added fallback logic for enabling Ultimate mode
* Improved UX for unsupported states

---

### 🔹 v0.2

**First system-integrated version**

* Qt-based UI
* Mode switching (Eco / Balanced / Performance / Ultimate)
* Real Windows Power Plan Control (powercfg)
* Admin privilege detection & UAC relaunch
* Power scheme sync toggle
* Simulated system stats

---

### 🔹 v0.1

**Initial prototype**

* Qt-based UI
* Mode switching
* Simulated values
* Basic UI styling

---

## 🎯 Planned Features

### 🔸 v0.4

* Real hardware monitoring (CPU/GPU temperatures)
* Replace simulated data with actual sensor readings

### 🔸 v0.5+

* Improved data handling
* Graphs / visualization

### 🔸 v1.0 (Goal)

* Advanced power control
* Fan control (EC level)
* Replace OEM control utilities (long-term goal)

---

## ▶️ How to Run

1. Build the project using Qt Creator (Debug or Release)

2. Navigate to the build directory: build/Desktop_Qt_6_10_2_MinGW_64_bit-Debug/debug

3. Run: WinPowerControlCenter.exe

---

### ⚠️ Important Notes

* Some features require **administrator privileges**
  * Use the **"Run as Admin"** button inside the app  
  * OR right-click the `.exe` → Run as administrator  

* If the application fails to launch due to missing Qt DLLs:
  * Run `windeployqt WinPowerControlCenter.exe` in the build folder

---

## 🛠️ Tech Stack

* C++
* Qt (Qt Widgets)
* Windows API
* QProcess (system commands)

---

## 📌 Notes

* Uses simulated hardware values (real hardware integration planned)
* Designed as a learning project for system-level application development

---

## 🙌 Author

Abhishek
   
