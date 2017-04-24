#ifndef CARTOONMESSAGES_H
#define CARTOONMESSAGES_H
#include "messagecentral.h"
#include <iostream>


class CartoonMessages : public MessageCentral
{
public:
    CartoonMessages();
    void startMessage();
    void endMessage();
    void mainMessage();
};

#endif // CARTOONMESSAGES_H
