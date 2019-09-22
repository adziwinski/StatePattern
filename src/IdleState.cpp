#include "IdleState.h"

IdleState::IdleState():State("Idle")
{
    //ctor
}

IdleState::~IdleState()
{
    //dtor
}

void IdleState::run(StateMachine * stateMachine){

}

void IdleState::standby(StateMachine * stateMachine){
    stateMachine->changeState(StateMachine::STANDBY);
}

