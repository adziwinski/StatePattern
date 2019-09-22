#include "StateMachine.h"
#include <iostream>
#include "IdleState.h"
#include "SettingsState.h"
#include "FreezingState.h"

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

void StateMachine::changeState(state_ state){

//    std::cout << "changing from " << m_pState->GetName() << " to ";
	delete m_pState;

    if (state==IDLE){
//        m_pState = static_cast<IdleState*> (new IdleState());
        m_pState = new IdleState();
    }
    if (state==SETTINGS){
        m_pState = new SettingsState();
    }
    if (state==FREEZING){
        m_pState = new FreezingState();
    }
}

