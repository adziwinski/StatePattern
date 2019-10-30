#ifndef FREEZINGSTATE_H
#define FREEZINGSTATE_H

#include "State.h"
#include "StateMachine.h"

class FreezingState : public State
{
    public:
        FreezingState();
        virtual ~FreezingState();

        virtual void myBegin();
        virtual void myRun();
        virtual void myEnd();

        virtual void ready(StateMachine * stateMachine);

    protected:

    private:
};

#endif // FREEZINGSTATE_H
