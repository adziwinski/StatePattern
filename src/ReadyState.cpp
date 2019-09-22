#include "ReadyState.h"

ReadyState::ReadyState():State("Ready")
{
    //ctor
}

ReadyState::~ReadyState()
{
    //dtor
}

void ReadyState::run(StateMachine * stateMachine){}

void ReadyState::standby(StateMachine * stateMachine){
    stateMachine->changeState(StateMachine::STANDBY);
}

void ReadyState::freezineg(StateMachine * stateMachine){
    stateMachine->changeState(StateMachine::FREEZING);
}

void ReadyState::settings(StateMachine * stateMachine){
    stateMachine->changeState(StateMachine::SETTINGS);
}
