# Project Results

## Prototype Outcome

The Smart EV Battery Management System was developed to monitor important battery parameters in real time and provide safety protection during abnormal conditions.

The system monitors:

- Battery voltage
- Battery current
- Temperature

## Observed Operation

During normal operation, the STM32 reads the sensor values and displays the monitored parameters on the LCD.

When the configured safety condition is detected, the system can:

- Activate the buzzer
- Display an alert message
- Control the protection relay

## Configured Firmware Thresholds

| Parameter | Threshold |
|---|---|
| Voltage | 12.0 V |
| Current | 5.0 A |
| Temperature | 50 °C |

## Project Achievement

The project successfully demonstrates the basic operation of an embedded EV battery monitoring and protection system using sensor-based monitoring and relay control.

## Future Scope

The system can be extended with:

- IoT-based remote monitoring
- ESP32 and Wi-Fi integration
- Cloud data storage
- Mobile Alerts
- State of Charge (SOC) estimation
- State of Health (SOH) estimation
- Advanced battery analytics
