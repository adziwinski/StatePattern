#ifndef IDLESTATE_H
#define IDLESTATE_H

#include <State.h>


class IdleState : public State
{
    public:
        IdleState();
        virtual ~IdleState();

        virtual run();
        virtual changeState(state_ state);

    protected:

    private:
};

#endif // IDLESTATE_H
