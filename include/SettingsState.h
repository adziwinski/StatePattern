#ifndef SETTINGSSTATE_H
#define SETTINGSSTATE_H

#include "State.h"

class SettingsState : public State
{
    public:
        SettingsState();
        virtual ~SettingsState();

        virtual void run(StateMachine * stateMachine);

    protected:

    private:
};

#endif // SETTINGSSTATE_H
