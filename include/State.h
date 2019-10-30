#ifndef STATE_H
#define STATE_H

#include <string>

class StateMachine;

class State
{
    public:
        State(std::string);
        virtual ~State();

        virtual void myBegin() = 0;
        virtual void myRun() = 0;
        virtual void myEnd() = 0;

        virtual void idle(StateMachine * stateMachine);
        virtual void standby(StateMachine * stateMachine);
        virtual void settings(StateMachine * stateMachine);
        virtual void ready(StateMachine * stateMachine);
        virtual void freezineg(StateMachine * stateMachine);
        virtual void service(StateMachine * stateMachine);


        std::string getName() { return m_name; }

    private:
        std::string m_name;

};

#endif // STATE_H
