#include <iostream>
#include "StateMachine.h"

using namespace std;

int main()
{
    StateMachine stateMachine;

    stateMachine.idle();
    stateMachine.standby();
    stateMachine.freezing();

    return 0;
}
