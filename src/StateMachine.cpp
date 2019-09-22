#include "StateMachine.h"
#include <iostream>
#include "IdleState.h"
#include "SettingsState.h"
#include "FreezingState.h"
#include "ReadyState.h"
#include "StandbyState.h"

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

void StateMachine::idle(){this->changeState(IDLE);}
void StateMachine::standby(){this->changeState(STANDBY);}
void StateMachine::ready(){this->changeState(READY);}
void StateMachine::freezing(){this->changeState(FREEZING);}
void StateMachine::settings(){this->changeState(SETTINGS);}

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

