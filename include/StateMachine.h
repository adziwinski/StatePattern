#ifndef STATEMACHINE_H
#define STATEMACHINE_H

#include "State.h"
//
class State;

class StateMachine
{
    public:

        enum state_{
            IDLE,
            STANDBY,
            READY,
            FREEZING,
            SETTINGS
        };

        StateMachine();

        virtual ~StateMachine();

        void run();

        void idle();
        void standby();
        void ready();
        void freezing();
        void settings();

        void changeState(state_ state);


    protected:

    private:

        State * m_pState;
};

#endif // STATEMACHINE_H
