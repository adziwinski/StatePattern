#ifndef SERVICESTATE_H
#define SERVICESTATE_H

#include <State.h>


class ServiceState : public State
{
    public:
        ServiceState();
        virtual ~ServiceState();

        virtual void myBegin();
        virtual void myRun();
        virtual void myEnd();

    protected:

    private:
};

#endif // SERVICESTATE_H
