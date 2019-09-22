#include "include/StateMachine.h"
#include <iostream>

using namespace std;

int main()
{
    StateMachine stateMachine;

    stateMachine.idle(); //illegal state change - state machine just is in idle state
    stateMachine.standby(); //regular change
    stateMachine.freezing();//illegal state change - it should be ready before
    stateMachine.ready(); //regular change
    stateMachine.freezing(); //regular change

    return 0;
}
