#include "ServiceState.h"
#include<iostream>

ServiceState::ServiceState():State("Service")
{
    //ctor
}

ServiceState::~ServiceState()
{
    //dtor
}

void ServiceState::myBegin(){
    std::cout<<"    ServiceState.myBegin"<<std::endl;
}
void ServiceState::myRun(){
    std::cout<<"    ServiceState.myRun"<<std::endl;
}
void ServiceState::myEnd(){
    std::cout<<"    ServiceState.myEnd"<<std::endl;
}

