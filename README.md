# Stop Signal
Simple Arduino sketch that sends a stop signal over serial whenever pin 2 is low. For use with [Ephys Link](https://github.com/VirtualBrainLab/ephys-link).

# Requirements
- Any Arduino which supports [`attachInterrupt`](https://www.arduino.cc/reference/en/language/functions/external-interrupts/attachinterrupt/) on pin 2 (the specific pin can be edited later if desired)
- Serial connection between Arduino and target device
- A switch or button and appropriate wiring (anything that will close a circuit when pressed)


# Installation and usage
## Wiring
- Simply attach a switch or button to connect pin 2 to GND when pressed

## Installation
- Install or get the latest version of the [Arduino IDE](https://www.arduino.cc/en/software)
- Clone this repo (`git clone https://github.com/VirtualBrainLab/stop-signal.git`)
- Open `StopSignal.ino`
- Attach an Arduino
- Select the Arduino used and the port it is attached to through the "Tools" menu
- Upload

## Usage
- When the switch is open, nothing will happen.
- Whenever the switch is closed, pin 2 will be put to `LOW` and a `1` (with a new line symbol) will be printed to serial.
