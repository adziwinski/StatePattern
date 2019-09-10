#ifndef IDLESTATE_H
#define IDLESTATE_H

#include "State.h"
#include "StateMachine.h"

class IdleState : public State
{
    public:
        IdleState();
        virtual ~IdleState();

        virtual void run(StateMachine * stateMachine);

    protected:

    private:
};

#endif // IDLESTATE_H
