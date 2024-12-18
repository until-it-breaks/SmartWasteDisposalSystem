#ifndef __RECEIVE_MSG__
#define __RECEIVE_MSG__

#include "communication/MsgService.h"
#include "Task.h"

extern MsgServiceClass MsgService;
extern bool restorePressed;
extern bool isContainerBeingEmptied;

class ReceiveMsgTask: public Task {
    public:
        void tick() override;
};

#endif
