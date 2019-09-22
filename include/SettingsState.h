#ifndef SETTINGSSTATE_H
#define SETTINGSSTATE_H

#include "State.h"
#include <string>

class SettingsState : public State
{
    public:
        SettingsState();
        virtual ~SettingsState();

        virtual void run(StateMachine * stateMachine);

//        virtual void idle(StateMachine * stateMachine);
//        virtual void standby(StateMachine * stateMachine);
//        virtual void settings(StateMachine * stateMachine);
//        virtual void ready(StateMachine * stateMachine);
//        virtual void freezineg(StateMachine * stateMachine);

    protected:

    private:
};

#endif // SETTINGSSTATE_H
