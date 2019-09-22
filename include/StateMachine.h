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
//        void myBegin();
//        void myEnd();

        void changeState(state_ state);


    protected:

    private:

        State * m_pState;
};

#endif // STATEMACHINE_H
