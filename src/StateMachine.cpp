#include "StateMachine.h"
#include <iostream>
#include "IdleState.h"
#include "SettingsState.h"
#include "FreezingState.h"

using namespace std;


StateMachine::StateMachine()
{
    //ctor
}

StateMachine::~StateMachine()
{
    //dtor
}

void StateMachine::run(){
    cout<<"StateMachine::run()"<<endl;
//    m_pState->
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

