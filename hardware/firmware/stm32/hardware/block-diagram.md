# Hardware Block Diagram

```text
          +----------------------+
          |     3S Battery Pack  |
          +----------+-----------+
                     |
                     v
          +----------------------+
          |   Voltage Sensor     |
          +----------+-----------+
                     |
                     v
+----------------+  +----------------------+  +----------------+
| ACS712 Current |->|     STM32 MCU        |->|  LCD Display   |
| Sensor         |  |                      |  +----------------+
+----------------+  | - Data Processing    |
                   | - Safety Monitoring   |----> Buzzer
+----------------+  | - Protection Control |----> Relay
| DHT11 Temp     |->|                      |----> Status LEDs
| Sensor         |  +----------------------+
+----------------+
