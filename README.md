# WinPower Control Center (WIP)

A custom open-source control center for all Windows devices.
This project aims to provide control over performance modes and reading accurate system sensors while having minimal resource footprint

---

## 🚀 Current Status

⚠️ Work in Progress (Learning + Development Project)

---

## 📦 Versions

### 🔹 v0.2 (Current)

**First system-integrated version**

#### ✨ Features:

* Qt-based UI
* Mode switching:

  * Eco
  * Balanced
  * Performance
  * Ultimate Performance
* **Real Windows Power Plan Control (powercfg)**
* **Admin privilege detection & UAC relaunch**
* "Run as Admin" button
* Power scheme sync toggle (checkbox)
* Simulated CPU & GPU temperatures
* Simulated fan speeds
* Smooth value transitions (anti-jump)
* Active mode UI feedback
* Button hover & styling improvements

---

### 🔹 v0.1

**Initial prototype**

* Qt-based UI
* Mode switching (Eco / Balanced / Performance)
* Simulated temps and fan speeds
* Basic UI styling

---

## 🎯 Planned Features

### 🔸 v0.3

* Detect current system power plan automatically
* Sync UI with actual system state
* UI polish and improvements

### 🔸 v0.5+

* Real hardware monitoring (CPU/GPU temps)
* Better data handling

### 🔸 v1.0 (Goal)

* Control OMEN performance modes
* Fan control (EC level)

---

## 🛠️ Tech Stack

* C++
* Qt (Qt Widgets)
* Windows API
* QProcess (system commands)

---

## 📌 Notes

* Power plan control requires **administrator privileges**
* Uses simulated hardware values (real hardware integration planned)
* Built as a learning project for system-level application development

---

## 🙌 Author

Abhishek

---
