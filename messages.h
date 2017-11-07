#ifndef MESSAGES_H
#define MESSAGES_H

#include <string>
#include <iostream>
#include "messagecentral.h"

class messages : public MessageCentral
{
public:
    messages();
private:

    std::string messageOne;
public:
    void getMessage();
    void setMessage(std::string toReplace);
    void startMessage();
    void endMessage();
};



#endif // MESSAGES_H
