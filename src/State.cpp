#include "../include/State.h"
#include <iostream>

State::State(std::string name): m_name(name)
{
    //ctor
}

State::~State()
{
    //dtor
}

void State::run(StateMachine *){
    std::cout << "Illegal state transition from " << getName() << " to run\n";
}

void State::idle(StateMachine * stateMachine){
    std::cout << "Illegal state transition from " << getName() << " to Idle\n";
}

void State::standby(StateMachine * stateMachine){
    std::cout << "Illegal state transition from " << getName() << " to Standby\n";
}

void State::settings(StateMachine * stateMachine){
    std::cout << "Illegal state transition from " << getName() << " to Settings\n";
}

void State::ready(StateMachine * stateMachine){
    std::cout << "Illegal state transition from " << getName() << " to Ready\n";
}

void State::freezineg(StateMachine * stateMachine){
    std::cout << "Illegal state transition from " << getName() << " to Freezing\n";
}




