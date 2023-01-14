// Note: PressureMouse class implicitly included via setting Tools -> USB Type -> Pressure Mouse in the Arduino IDE.

#include <USBHost_t36.h>

USBHost usbHost;
USBHIDParser usbHostedHidParser(usbHost);
MouseController usbHostedMouse(usbHost);

#define FSR_PIN PIN_A0

void setup() {
  usbHost.begin();
}

void loop() {
  usbHost.Task();
  if (usbHostedMouse.available()) {
    PressureMouse.transmit(usbHostedMouse.getMouseX(), usbHostedMouse.getMouseY(), analogRead(FSR_PIN));
    usbHostedMouse.mouseDataClear();
  }
}
