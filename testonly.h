/****** Class made for testing purposes only *****
 * include here all headers and instantiate all the classes
 * to cleanup main.cpp
 */

#ifndef TESTONLY_H
#define TESTONLY_H
#include "cartoonmessages.h"
#include "messages.h"
#include "messagecentral.h"
#include "purerandom.h"


class TestOnly
{
public:
    TestOnly();
    std::string defaultMessage;
    void testCartoonMessages(std::string name = "Stugg");
    void userMessage();
    void userMessage(std::string defaultMsg);
};

#endif // TESTONLY_H
