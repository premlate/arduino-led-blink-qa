# Wiring Guide

| From | Through | To |
|---|---|---|
| Arduino pin 8 | 220 ohm resistor | LED anode (long leg) |
| LED cathode (short leg) | - | Arduino GND |

## Resistor calculation
R = (5 V - 2 V) / 15 mA = 200 ohm
Nearest standard value: 220 ohm. This protects the LED and the Arduino pin.
