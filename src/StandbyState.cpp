#include "../include/StandbyState.h"

StandbyState::StandbyState():State("Standby")
{
    //ctor
}

StandbyState::~StandbyState()
{
    //dtor
}

void StandbyState::run(StateMachine * stateMachine){

}

void StandbyState::settings(StateMachine * stateMachine){
    stateMachine->changeState(StateMachine::SETTINGS);
}

void StandbyState::ready(StateMachine * stateMachine){
    stateMachine->changeState(StateMachine::STANDBY);
}

