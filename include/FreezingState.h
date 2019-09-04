#ifndef FREEZINGSTATE_H
#define FREEZINGSTATE_H

#include "State.h"

class FreezingState : public State
{
    public:
        FreezingState();
        virtual ~FreezingState();
        virtual run();

    protected:

    private:
};

#endif // FREEZINGSTATE_H
