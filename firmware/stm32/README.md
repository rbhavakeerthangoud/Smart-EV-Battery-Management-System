# STM32 Firmware

This folder contains the STM32 firmware used in the **EV BMS with Charge Monitor and Fire Protection** project.

## Main Source File

- `stm32/main.c` – Main application logic for:
  - Battery voltage monitoring
  - Current monitoring
  - Temperature monitoring
  - Buzzer alert
  - Relay protection
  - LCD status display

## External Dependencies

The main source code uses the following project-specific headers:

- `lcd.h`
- `dht11.h`
- `adc.h`

The original source files for these libraries are not currently available in this repository.

## Note

`SystemClock_Config()` is declared in `main.c`, but its implementation is not included in the source code available from the original project report.

The repository preserves the available original firmware source while documenting the unavailable project-specific dependencies.
# STM32 Firmware

This folder contains the STM32 firmware for the Smart EV Battery Management System.

## Functions

- Reads battery voltage
- Reads battery current
- Monitors battery temperature
- Displays sensor data
- Detects unsafe conditions
- Activates buzzer alert
- Controls relay protection
- Supports battery charge and discharge indication

## Main File

`main.c` contains the main control logic of the STM32 system.
