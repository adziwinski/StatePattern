#include "../include/SettingsState.h"
#include <iostream>

SettingsState::SettingsState():State("Settings")
{
    //ctor
}

SettingsState::~SettingsState()
{
    //dtor
}


void SettingsState::myBegin(){
    std::cout<<"    SettingsState.myBegin"<<std::endl;
}
void SettingsState::myRun(){
    std::cout<<"    SettingsState.myRun"<<std::endl;
}
void SettingsState::myEnd(){
    std::cout<<"    SettingsState.myEnd"<<std::endl;
}

void SettingsState::standby(StateMachine * stateMachine){
    stateMachine->changeState(StateMachine::STANDBY);
}

void SettingsState::ready(StateMachine * stateMachine){
    stateMachine->changeState(StateMachine::READY);
}
