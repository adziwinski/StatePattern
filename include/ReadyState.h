#ifndef READYSTATE_H
#define READYSTATE_H

#include "State.h"
#include "StateMachine.h"


class ReadyState : public State
{
    public:
        ReadyState();
        virtual ~ReadyState();

        virtual void myBegin();
        virtual void myRun();
        virtual void myEnd();

        virtual void standby(StateMachine * stateMachine);
        virtual void freezineg(StateMachine * stateMachine);
        virtual void settings(StateMachine * stateMachine);

    protected:

    private:
};

#endif // READYSTATE_H
