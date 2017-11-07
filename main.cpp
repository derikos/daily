#include <iostream>
#include "messages.h"
#include "messagecentral.h"
#include "cartoonmessages.h"
#include "testonly.h"

//using namespace std;

int main(int argc, char *argv[])
{
    std::cout << "Fuck you,world!" << std::endl;

    TestOnly object;
    std::string mata = "ana a ramas fara mere";
    object.userMessage(mata);
    messages mainMessage;
    mainMessage.startMessage();

    //In order to access static class methods the correct accest is the namespace one i.e. "::"
    messages::classMessage();
    return 0;
}
