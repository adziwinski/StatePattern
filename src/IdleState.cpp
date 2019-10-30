#include "../include/IdleState.h"
#include <iostream>

IdleState::IdleState():State("Idle")
{
    //ctor
}

IdleState::~IdleState()
{
    //dtor
}

void IdleState::myBegin(){
    std::cout<<"    IdleState.myBegin"<<std::endl;
}
void IdleState::myRun(){
    std::cout<<"    IdleState.myRun"<<std::endl;
}
void IdleState::myEnd(){
    std::cout<<"    IdleState.myEnd"<<std::endl;
}

void IdleState::standby(StateMachine * stateMachine){
    stateMachine->changeState(StateMachine::STANDBY);
}

void IdleState::service(StateMachine * stateMachine){
    stateMachine->changeState(StateMachine::SERVICE);
}

