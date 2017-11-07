#include "messages.h"
#include <iostream>
#include <string>

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
