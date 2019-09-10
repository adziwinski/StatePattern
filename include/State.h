#ifndef STATE_H
#define STATE_H

//#include "IdleState.h"
//#include "SettingsState.h"
//#include "FreezingState.h"
//#include "StateMachine.h"
class StateMachine;

class State
{
    public:

        State();
        virtual ~State();

        virtual void run(StateMachine * stateMachine) = 0;

    protected:

    private:

};

#endif // STATE_H
