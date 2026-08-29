# Smart-EV-Battery-Management-System
An embedded and IoT-based EV battery monitoring system with real-time charge monitoring, safety protection, and remote monitoring capabilities.
# ⚡ Smart EV Battery Management System

### EV BMS with Charge Monitoring and Fire Protection

An embedded-system-based project for monitoring critical Electric Vehicle (EV) battery parameters and improving battery safety through real-time monitoring, alert generation, and protective control.

The system monitors **battery voltage, current, and temperature** using sensors connected to an **STM32 microcontroller**. When abnormal conditions are detected, the system provides alerts and can use relays to isolate the battery from the circuit.

---

## 📌 Overview
![EV BMS Prototype](images/ev-bms-prototype.jpg)

Electric vehicle batteries require continuous monitoring to maintain safe and reliable operation. The **Smart EV Battery Management System** is designed as an educational prototype that monitors important battery parameters and responds to unsafe conditions.

The project focuses on:

- Real-time battery voltage monitoring
- Battery current monitoring
- Temperature monitoring
- Battery status display
- Charge monitoring
- Abnormal condition detection
- Relay-based battery protection
- Fire-risk prevention through thermal monitoring

---

## 🎯 Project Objectives

The main objectives of this project are:

- Monitor battery voltage continuously
- Measure charging and discharging current
- Monitor battery temperature
- Detect abnormal operating conditions
- Display battery parameters in real time
- Generate alerts when safety limits are exceeded
- Disconnect the battery during critical conditions
- Improve the safety and reliability of battery operation

---

## 🏗️ System Architecture

```text
                         +---------------------+
                         | Temperature Sensor  |
                         |       (DHT11)       |
                         +----------+----------+
                                    |
                                    v
+----------------+          +---------------+          +-------------+
| Voltage Sensor |--------->|               |--------->| LCD Display |
+----------------+          |     STM32     |          +-------------+
                            |  Controller   |
+----------------+          |               |
| Current Sensor |--------->|    (ACS712)   |
+----------------+          +-------+-------+
                                    |
                                    v
                             +--------------+
                             |    Relay     |
                             |  Protection  |
                             +------+-------+
                                    |
                                    v
                             +--------------+
                             |  3S Battery  |
                             |     Pack     |
                             +--------------+
                                    ^
                                    |
                             +--------------+
                             |   Charging   |
                             |   Circuit    |
                             +--------------+
🔧 Hardware Components
Component
Purpose
STM32 Microcontroller
Main control and processing unit
3S Battery Pack
Battery power source
Voltage Sensor
Measures battery voltage
ACS712 Current Sensor
Measures charging/discharging current
DHT11 Sensor
Monitors temperature
LCD Display
Displays battery parameters and system status
Relay
Disconnects the battery during unsafe conditions
Charging Circuit
Provides controlled battery charging
⚙️ Working Principle
The system operates through the following process:
The STM32 initializes all connected sensors and peripherals.
The voltage sensor measures the battery voltage.
The ACS712 measures the current flowing through the battery.
The DHT11 monitors the surrounding or battery temperature.
The STM32 continuously processes the sensor data.
Voltage, current, temperature, and battery information are displayed on the LCD.
The measured values are compared with predefined safety limits.
If an abnormal condition is detected, the system generates an alert.
During critical conditions, the relay can disconnect the battery from the charging or load circuit.
🛡️ Safety Features
The system is designed to detect and respond to conditions such as:
⚡ Over-voltage
🔋 Under-voltage
🔌 Over-current
🌡️ High temperature
🚨 Abnormal battery conditions
🔒 Emergency battery isolation
Protection Operation
Sensor Data
     ↓
STM32 Processing
     ↓
Safety Limit Check
     ↓
Is Parameter Abnormal?
   /              \
 NO                YES
 |                  |
Normal           Alert
Operation           ↓
                   Relay
                   Control
                     ↓
             Battery Isolation
📊 Parameters Monitored
Parameter
Sensor / Method
Battery Voltage
Voltage Sensor
Battery Current
ACS712
Temperature
DHT11
System Status
STM32 Processing
Safety Condition
Threshold-based Monitoring
📁 Repository Structure
Smart-EV-Battery-Management-System/
│
├── README.md
│
├── firmware/
│   └── stm32/
│       └── source-code
│
├── hardware/
│   ├── block-diagram/
│   ├── circuit-diagram/
│   └── components/
│
├── images/
│   ├── prototype/
│   └── system-design/
│
└── docs/
    └── project-report/
✨ Key Features
📊 Real-time battery monitoring
⚡ Voltage measurement
🔌 Current measurement
🌡️ Temperature monitoring
🖥️ LCD-based status display
🚨 Abnormal condition alerts
🔒 Relay-based safety control
🔋 Charge monitoring
🔥 Fire-risk prevention through temperature monitoring
🚀 Future Enhancements
The project can be extended with:
IoT-based remote monitoring
ESP32 and Wi-Fi integration
Cloud dashboard integration
State of Charge (SOC) estimation
State of Health (SOH) estimation
Mobile application monitoring
CAN bus communication
AI-based battery health prediction
Advanced battery analytics
Mobile safety notifications
🛠️ Technologies Used
Embedded Systems
STM32 Microcontroller
Embedded C
Sensor Interfacing
ADC
LCD Interface
Battery Management Concepts
Electrical Safety and Protection
📌 Applications
This project can be used as a prototype for:
Electric Vehicle Battery Monitoring
Battery Management Systems
Smart Battery Systems
Industrial Battery Monitoring
Renewable Energy Storage
Embedded Systems Learning
EV Safety Research
⚠️ Disclaimer
This project is an educational prototype developed for academic and learning purposes.
It is not intended to replace a certified commercial EV Battery Management System. A production-level EV battery system requires specialized hardware, rigorous testing, dedicated protection circuits, and compliance with applicable battery and automotive safety standards.
👥 Project Team
R. BHAVA KEETHAN GOUD
B. Uday Kiran
N. Prashanth
R. Vedhanth
K. Saisree
K. Jyoshna
V. Vaishanavi
E. Anjali

## 📄 Project Report

The complete diploma project report is available here:

[📥 View the Complete Project Report](EV%20BMS%20WITH%20CHARGE%20MONITOR%20AND%20FIRE%20PROTECTION%20FINAL%20OUT.docx)
### ⭐ If you found this project interesting, consider giving the repository a star!
