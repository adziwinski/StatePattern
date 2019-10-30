#ifndef STANDBYSTATE_H
#define STANDBYSTATE_H

#include "State.h"
#include "StateMachine.h"


class StandbyState : public State
{
    public:
        StandbyState();
        virtual ~StandbyState();

        virtual void myBegin();
        virtual void myRun();
        virtual void myEnd();

        virtual void settings(StateMachine * stateMachine);
        virtual void ready(StateMachine * stateMachine);

    protected:

    private:
};

#endif // STANDBYSTATE_H
