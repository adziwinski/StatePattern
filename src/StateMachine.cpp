#include "../include/StateMachine.h"
#include <iostream>

using namespace std;


StateMachine::StateMachine(): m_pState(new IdleState())
{
    m_pIdle = new IdleState();
    m_pStandby = new StandbyState();
    m_pReady = new ReadyState();
    m_pFreezing = new FreezingState();
    m_pSettings = new SettingsState();
}

StateMachine::~StateMachine()
{
    delete m_pIdle;
    delete m_pStandby;
    delete m_pReady;
    delete m_pFreezing;
    delete m_pSettings;
}

void StateMachine::idle(){m_pState->idle(this);}
void StateMachine::standby(){m_pState->standby(this);}
void StateMachine::ready(){m_pState->ready(this);}
void StateMachine::freezing(){m_pState->freezineg(this);}
void StateMachine::settings(){m_pState->settings(this);}

void StateMachine::changeState(state_ state){

    std::cout << "Changing from " << m_pState->getName() << " to ";

/** this code can't meet MISRA C++ 2008
//	delete m_pState;
//    if (state==IDLE){
//        m_pState = new IdleState();
//    }
//    if (state==STANDBY){
//        m_pState = new SettingsState();
//    }
//    if (state==READY){
//        m_pState = new ReadyState();
//    }
//    if (state==FREEZING){
//        m_pState = new FreezingState();
//    }
//    if (state==SETTINGS){
//        m_pState = new SettingsState();
//    }
*/

    m_pState->myEnd();
    switch(state){
    case IDLE:
        m_pState = m_pIdle;
        break;
    case STANDBY:
        m_pState = m_pStandby;
        break;
    case READY:
        m_pState = m_pReady;
        break;
    case FREEZING:
        m_pState = m_pFreezing;
        break;
    case SETTINGS:
        m_pState = m_pSettings;
        break;
    }
    std::cout << m_pState->getName() << " state\n";
    m_pState->myBegin();
}

