# Arduino LED Blink with QA

Blinks an LED on pin 8 of an Arduino Uno at 1 Hz. Bugs were tracked with GitHub Issues and fixed through pull requests.

## Components
Arduino Uno, 5 mm LED, 220 ohm resistor, breadboard, jumper wires, USB cable

## Wiring
See docs/wiring.md. Pin 8 -> 220 ohm -> LED anode; LED cathode -> GND.

## How to run
1. Open src/led_blink/led_blink.ino in Arduino IDE.
2. Select Board: Arduino Uno and the correct port.
3. Upload and open Serial Monitor at 9600 baud.
