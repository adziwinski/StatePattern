#include "../include/SettingsState.h"

SettingsState::SettingsState():State("Settings")
{
    //ctor
}

SettingsState::~SettingsState()
{
    //dtor
}

void SettingsState::run(StateMachine * stateMachine){}

void SettingsState::standby(StateMachine * stateMachine){
    stateMachine->changeState(StateMachine::STANDBY);
}

void SettingsState::ready(StateMachine * stateMachine){
    stateMachine->changeState(StateMachine::READY);
}
