#ifndef __EMPTYING_PROCESS__
#define __EMPTYING_PROCESS__

#include "headers/Defines.h"
#include "State.h"
#include "controllers/DoorController.h"
#include "controllers/LedController.h"
#include <LiquidCrystal_I2C.h>

extern LedController* ledController;
extern DoorController* doorController;
extern String stateMsg;
extern LiquidCrystal_I2C* lcd;

class EmptyingProcess : public State {
    private:
        unsigned long startTime;
    public:
        void init() override;
        State* handle() override;
};

#endif
