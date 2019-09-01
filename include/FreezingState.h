#ifndef FREEZINGSTATE_H
#define FREEZINGSTATE_H

#include <State.h>


class FreezingState : public State
{
    public:
        FreezingState();
        virtual ~FreezingState();
        virtual run();
        virtual changeState(state_ state);

    protected:

    private:
};

#endif // FREEZINGSTATE_H
