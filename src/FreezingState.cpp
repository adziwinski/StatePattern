#include "../include/FreezingState.h"
#include <iostream>

FreezingState::FreezingState():State("Freezing")
{
    //ctor
}

FreezingState::~FreezingState()
{
    //dtor
}

void FreezingState::myBegin(){
    std::cout<<"    FreezingState.myBegin"<<std::endl;
}
void FreezingState::myRun(){
    std::cout<<"    FreezingState.myRun"<<std::endl;
}
void FreezingState::myEnd(){
    std::cout<<"    FreezingState.myEnd"<<std::endl;
}

void FreezingState::ready(StateMachine * stateMachine){
    stateMachine->changeState(StateMachine::READY);
}
