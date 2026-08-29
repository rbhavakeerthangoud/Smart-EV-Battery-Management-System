# Circuit Connections

## Main Controller

The STM32 microcontroller is the main controller of the Smart EV Battery Management System. It receives sensor data, processes the battery condition, and controls the safety outputs.

## Sensor Connections

### Voltage Sensor

- Connect the voltage sensor output to an STM32 ADC input.
- The sensor measures the battery voltage.

### ACS712 Current Sensor

- Connect the ACS712 output to an STM32 ADC input.
- The sensor measures battery charging or discharging current.

### DHT11 Temperature Sensor

- Connect the DHT11 data pin to a digital GPIO pin of the STM32.
- The sensor provides temperature data to the controller.

## Output Connections

### LCD Display

The LCD is connected to the STM32 for displaying:

- Battery voltage
- Battery current
- Temperature
- System status
- Alert messages

### Buzzer

The buzzer is controlled by an STM32 GPIO pin and is activated when an unsafe condition is detected.

### Relay Module

The relay is controlled by the STM32 and provides protective control during abnormal battery conditions.

## Safety Thresholds

The firmware uses the following configured thresholds:

| Parameter | Threshold |
|---|---|
| Voltage | 12.0 V |
| Current | 5.0 A |
| Temperature | 50 °C |

> Note: These thresholds are the values currently configured in the project firmware and should be adjusted according to the actual battery pack and hardware design.

## Important

The exact STM32 pin numbers and circuit wiring should match the final prototype and circuit diagram used in the project.
