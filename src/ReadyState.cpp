#include "../include/ReadyState.h"
#include <iostream>

ReadyState::ReadyState():State("Ready")
{
    //ctor
}

ReadyState::~ReadyState()
{
    //dtor
}

void ReadyState::myBegin(){
    std::cout<<"    ReadyState.myBegin"<<std::endl;
}
void ReadyState::myRun(){
    std::cout<<"    ReadyState.myRun"<<std::endl;
}
void ReadyState::myEnd(){
    std::cout<<"    ReadyState.myEnd"<<std::endl;
}
void ReadyState::standby(StateMachine * stateMachine){
    stateMachine->changeState(StateMachine::STANDBY);
}

void ReadyState::freezineg(StateMachine * stateMachine){
    stateMachine->changeState(StateMachine::FREEZING);
}

void ReadyState::settings(StateMachine * stateMachine){
    stateMachine->changeState(StateMachine::SETTINGS);
}
