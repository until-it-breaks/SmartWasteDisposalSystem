#ifndef __DANGEROUS_TEMP__
#define __DANGEROUS_TEMP__

#include "State.h"
#include "controllers/LedController.h"
#include "controllers/DoorController.h"
#include "controllers/TemperatureController.h"
#include <LiquidCrystal_I2C.h>

extern LedController* ledController;
extern DoorController* doorController;
extern TemperatureController* tempController;
extern String state;
extern LiquidCrystal_I2C* lcd;

class DangerousTemp: public State {
    public:
        void execute() override;
        State* next() override;
};

#endif
