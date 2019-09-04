#ifndef IDLESTATE_H
#define IDLESTATE_H

#include "State.h"

class IdleState : public State
{
    public:
        IdleState();
        virtual ~IdleState();

        virtual run();

    protected:

    private:
};

#endif // IDLESTATE_H
