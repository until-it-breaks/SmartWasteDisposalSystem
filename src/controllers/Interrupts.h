#ifndef __BUTTON_PAD_CONTROLLER__
#define __BUTTON_PAD_CONTROLLER__

extern bool openPressed;
extern bool closePressed;

void setupButtons(int openPin, int closePin);

void setupMotionSensor(int pirPin);

void openButtonISR();

void closeButtonISR();

void pirISR();

#endif