#ifndef IDLESTATE_H
#define IDLESTATE_H

#include "State.h"
#include "StateMachine.h"

class IdleState : public State
{
    public:
        IdleState();
        virtual ~IdleState();

        virtual void myBegin();
        virtual void myRun();
        virtual void myEnd();

        virtual void standby(StateMachine * stateMachine);
        virtual void service(StateMachine * stateMachine);


    protected:

    private:
};

#endif // IDLESTATE_H
