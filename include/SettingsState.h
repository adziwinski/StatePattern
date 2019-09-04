#ifndef SETTINGSSTATE_H
#define SETTINGSSTATE_H

#include "State.h"

class SettingsState : public State
{
    public:
        SettingsState();
        virtual ~SettingsState();

        virtual run();

    protected:

    private:
};

#endif // SETTINGSSTATE_H
