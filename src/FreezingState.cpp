#include "FreezingState.h"

FreezingState::FreezingState():State("Freezing")
{
    //ctor
}

FreezingState::~FreezingState()
{
    //dtor
}

void FreezingState::run(StateMachine * stateMachine){

}

void FreezingState::ready(StateMachine * stateMachine){
    stateMachine->changeState(StateMachine::READY);
}
