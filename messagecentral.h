/* ******************  Demostration of an Abstract Class ***
 *
 *
 * Below we have a normal constructor,no parameters and with
 * three virtual methods declared.
 * What makes them different is the = 0 at the end ,making those marked is such
 * as PURE VIRTUAL FUNCTIONS , meaning the classes that will inherit this one
 * *** MUST *** reimplement them ,but the just virtual function's
 * implementation can be skipped
 *
 */

#ifndef MESSAGECENTRAL_H
#define MESSAGECENTRAL_H


class MessageCentral
{
public:
    MessageCentral();
    virtual void startMessage() = 0;
    virtual void mainMessage();
    virtual void endMessage() = 0;
};

#endif // MESSAGECENTRAL_H
