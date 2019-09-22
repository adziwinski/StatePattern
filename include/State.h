#ifndef STATE_H
#define STATE_H

#include <string>

class StateMachine;

class State
{
    public:
        State(std::string);
        virtual ~State();

        virtual void run(StateMachine * stateMachine) = 0;

        virtual void idle(StateMachine * stateMachine);
        virtual void standby(StateMachine * stateMachine);
        virtual void settings(StateMachine * stateMachine);
        virtual void ready(StateMachine * stateMachine);
        virtual void freezineg(StateMachine * stateMachine);

        std::string getName() { return m_name; }

    private:
        std::string m_name;

};

#endif // STATE_H
