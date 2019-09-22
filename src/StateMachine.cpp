#include "../include/StateMachine.h"
#include <iostream>
#include "../include/IdleState.h"
#include "../include/SettingsState.h"
#include "../include/FreezingState.h"
#include "../include/ReadyState.h"
#include "../include/StandbyState.h"

using namespace std;


StateMachine::StateMachine(): m_pState(new IdleState())
{
    //ctor
}

StateMachine::~StateMachine()
{
    delete m_pState;
}

void StateMachine::run(){

    cout<<"StateMachine::run()"<<endl;
    m_pState->run(this);
}

void StateMachine::idle(){m_pState->idle(this);}
void StateMachine::standby(){m_pState->standby(this);}
void StateMachine::ready(){m_pState->ready(this);}
void StateMachine::freezing(){m_pState->freezineg(this);}
void StateMachine::settings(){m_pState->settings(this);}

void StateMachine::changeState(state_ state){

    std::cout << "changing from " << m_pState->getName() << " to ";
	delete m_pState;

    if (state==IDLE){
        m_pState = new IdleState();
    }
    if (state==STANDBY){
        m_pState = new SettingsState();
    }
    if (state==READY){
        m_pState = new ReadyState();
    }
    if (state==FREEZING){
        m_pState = new FreezingState();
    }
    if (state==SETTINGS){
        m_pState = new SettingsState();
    }


    std::cout << m_pState->getName() << " state\n";
}

