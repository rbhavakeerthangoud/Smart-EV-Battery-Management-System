# System Working

## 1. System Initialization

When the system is powered on, the STM32 initializes the GPIO pins, LCD, DHT11 temperature sensor, and ADC module.

## 2. Battery Parameter Monitoring

The system continuously measures the following parameters:

- Battery voltage
- Battery current
- Battery temperature

The voltage sensor measures the battery voltage, the ACS712 sensor measures current, and the DHT11 sensor monitors temperature.

## 3. Data Processing

The STM32 reads the sensor values and compares them with predefined safety thresholds.

The configured thresholds are:

- Voltage: 12.0 V
- Current: 5.0 A
- Temperature: 50 °C

## 4. Normal Operation

If all monitored parameters are within the configured safety limits, the system continues normal operation.

The buzzer remains off and the system displays normal status information.

## 5. Abnormal Condition Detection

If voltage, current, or temperature reaches the configured threshold, the system identifies the condition as unsafe.

## 6. Protection Action

During an unsafe condition, the STM32:

1. Activates the buzzer.
2. Controls the protection relay.
3. Displays an alert message.
4. Provides a safety response based on the relay configuration.

## 7. Continuous Monitoring

The system repeats this monitoring process continuously, updating the sensor data and checking battery conditions in real time.

---

## System Flow

```text
Start
  |
  v
Initialize STM32 and Sensors
  |
  v
Read Voltage, Current and Temperature
  |
  v
Display Sensor Data
  |
  v
Compare with Safety Thresholds
  |
  +---- Normal ----> Continue Monitoring
  |
  +---- Unsafe ----> Activate Alert and Protection Relay
                        |
                        v
                  Continue Monitoring
