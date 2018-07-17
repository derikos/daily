#include "messages.h"
#include <iostream>
#include <string>

int messages::myStatic = 5;
messages::messages()
    : messageOne("Finally")
{
    std::cout<<messageOne<<std::endl;
    messageOne = "changed initial value";
}


void messages::getMessage()
{
    std::cout << messageOne << std::endl;
}

void messages::setMessage(std::string toReplace)
{
    messageOne = toReplace;
}

void messages::startMessage()
{
    std::cout<< "starts message"<<std::endl;
}

void messages::endMessage()
{
    std::cout << "ends message"<<std::endl;
}

void messages::classMessage()
{
    std::cout << "NO objects needed" << std::endl;
}
