#include "ButtonPadController.h"    
    
ButtonPadController::ButtonPadController(Button* openButton, Button* closeButton) {
    this->openButton = openButton;
    this->closeButton = closeButton;
}

ButtonPadController::~ButtonPadController() {
    delete this->openButton;
    delete this->closeButton;
}

bool ButtonPadController::isOpenPressed() {
    return this->openButton->isPressed();
}

bool ButtonPadController::isClosePressed() {
    return this->closeButton->isPressed();
}
