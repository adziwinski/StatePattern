#ifndef FREEZINGSTATE_H
#define FREEZINGSTATE_H

#include "State.h"
#include "StateMachine.h"

class FreezingState : public State
{
    public:
        FreezingState();
        virtual ~FreezingState();
        virtual void run(StateMachine * stateMachine);

        virtual void ready(StateMachine * stateMachine);

    protected:

    private:
};

#endif // FREEZINGSTATE_H
