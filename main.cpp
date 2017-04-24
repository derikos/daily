#include <iostream>
#include "messages.h"
#include "messagecentral.h"
#include "cartoonmessages.h"

//using namespace std;

int main(int argc, char *argv[])
{
    std::cout << "Fuck you,world!" << std::endl;
    //time to do some random stuff
    //creating class objects as I go along to test implementetions
    //Messages Class - used to practice class constructors usage
    messages rudeMessage; //TODO - use parameters
    rudeMessage.getMessage();
    rudeMessage.setMessage("hardcoding Style");
    rudeMessage.getMessage();
    //MessageCentral b;  Done to ilustrate that abstract classes cannot be instantiated
    //in common tongue this means you cannot create an object of an abstract class
    //MessageCentral objectOfAbstractClass;

    CartoonMessages mickeyMouse;

    /* mickeyMouse object created at first with just one pure virtual method
     * implemented in derived CartoonMessages Class to validate
     * that we cannot instantiate an abstract class,all pure virtual methods
     * need reimplementation.
     * Will use same object to test after doing propper implementation of derived class
     */

    mickeyMouse.startMessage();
    mickeyMouse.endMessage();


    return 0;
}
