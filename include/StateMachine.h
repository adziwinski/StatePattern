#ifndef STATEMACHINE_H
#define STATEMACHINE_H

#include "State.h"

 class State;

class StateMachine
{
    public:

        enum state_{
            FREEZING,
            SETTINGS,
            IDLE
        };

        StateMachine();

        virtual ~StateMachine();

//        void run();
//        void myBegin();
//        void myEnd();

//        virtual changeState(state_ state);


    protected:

    private:

        State * m_pState;
};

#endif // STATEMACHINE_H
