#ifndef STATEMACHINE_H
#define STATEMACHINE_H

#include "State.h"
#include "../include/IdleState.h"
#include "../include/SettingsState.h"
#include "../include/FreezingState.h"
#include "../include/ReadyState.h"
#include "../include/StandbyState.h"

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

//        virtual ~StateMachine();

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
    State * m_pIdle;
    State * m_pStandby;
    State * m_pReady;
    State * m_pFreezing;
    State * m_pSettings;
};

#endif // STATEMACHINE_H
