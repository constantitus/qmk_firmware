## About
Quick proof-of-concept firmware for a gamepad based on the arduino nano or just atmega328p.
The pins are should have been arranged in a better way, but I've soldered everything in a hurry and filled it with hot glue, so I ain't touching that shit.

You'll need to flash ![USBaspLoader](https://github.com/baerwolf/USBaspLoader) to your chip. There should be some guides on the internet for doing that.

You'll have to solder a usb port with 22ohm resistors in series on the d+ and d- lines and a 1.5K resistor from d- too VCC. Again, there should be guides on the internet for that.
