# Pressure Mouse

This repository hosts the code for a [Teensy 4.0](https://www.pjrc.com/store/teensy40.html) board to act as a man-in-the-middle, turning a regular USB Mouse into a pressure-sensitive drawing tablet. There are two components, the main .ino file, and the patches to the Teensy 4.0 USB Driver.

A detailed how-to video, including showing the completed project in action, can be found [on YouTube](https://www.youtube.com/watch?v=1sC4i9qdDFM).

## Schematic

![Schematic](schematic.svg)

## Code

The main Arduino sketch is in `PressureMouse.ino`. The necessary patches to the Teensy 4.0 USB driver are in `0001-Add-pressure-mouse.patch` and `0002-Add-regular-mouse-endpoint-to-pressure-mouse.patch`, to be applied in that sequence. They are to be applied from the directory `your-Arduino-library-location/packages/teensy/hardware/avr/x.y.z/`. This patch was originally written and tested when `x.y.z` was `1.57.2`.
