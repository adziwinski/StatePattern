#ifndef STATE_H
#define STATE_H


class State
{
    public:
        State();
        virtual ~State();

        virtual run();
        virtual changeState(state_ state);

    protected:

    private:

        enum state_{
        FREEZING,
        SETTINGS,
        IDLE
        };

        state_ m_state;

};

#endif // STATE_H
