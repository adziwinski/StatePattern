#ifndef MYDEVICE_H
#define MYDEVICE_H

#include "State.h"


class MyDevice
{
    public:
        MyDevice();
        virtual ~MyDevice();

    protected:

    private:

        State * m_pState;
};

#endif // MYDEVICE_H
