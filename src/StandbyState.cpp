#include "../include/StandbyState.h"
#include <iostream>

StandbyState::StandbyState():State("Standby")
{
    //ctor
}

StandbyState::~StandbyState()
{
    //dtor
}

void StandbyState::myBegin(){
    std::cout<<"    StandbyState.myBegin"<<std::endl;
}
void StandbyState::myRun(){
    std::cout<<"    StandbyState.myRun"<<std::endl;
}
void StandbyState::myEnd(){
    std::cout<<"    StandbyState.myEnd"<<std::endl;
}

void StandbyState::settings(StateMachine * stateMachine){
    stateMachine->changeState(StateMachine::SETTINGS);
}

void StandbyState::ready(StateMachine * stateMachine){
    stateMachine->changeState(StateMachine::READY);
}

