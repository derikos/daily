#ifndef MESSAGES_H
#define MESSAGES_H

#include <string>
#include <iostream>


class messages
{
public:
    messages();
private:

    std::string messageOne;
public:
    void getMessage();
    void setMessage(std::string toReplace);
};



#endif // MESSAGES_H
