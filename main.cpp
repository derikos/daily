#include <iostream>
#include "messages.h"

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

    return 0;
}
