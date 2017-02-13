int j;
Button itsButton;
LED itsLED;
itsButton = Button_Create(); itsLED = LED_Create();
for (j=0;j<9;j++) {
ISRAddress[j] = NULL; oldVectors[j] = NULL; };
ButtonHandler_setItsLED(&itsLED); install(); /* install interrupt vectors */