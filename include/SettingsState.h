#ifndef SETTINGSSTATE_H
#define SETTINGSSTATE_H

#include <State.h>


class SettingsState : public State
{
    public:
        SettingsState();
        virtual ~SettingsState();

        virtual run();
        virtual changeState(state_ state);

    protected:

    private:
};

#endif // SETTINGSSTATE_H
