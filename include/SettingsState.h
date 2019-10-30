#ifndef SETTINGSSTATE_H
#define SETTINGSSTATE_H

#include "State.h"
#include "StateMachine.h"
#include <string>

class SettingsState : public State
{
    public:
        SettingsState();
        virtual ~SettingsState();

        virtual void myBegin();
        virtual void myRun();
        virtual void myEnd();

        virtual void standby(StateMachine * stateMachine);
        virtual void ready(StateMachine * stateMachine);

    protected:

    private:
};

#endif // SETTINGSSTATE_H
