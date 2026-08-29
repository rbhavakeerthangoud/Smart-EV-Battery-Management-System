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
