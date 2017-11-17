#include <iostream>
#include "messages.h"
#include "messagecentral.h"
#include "cartoonmessages.h"
#include "testonly.h"

//using namespace std;

template <class T>
T add(T a,T b)
{
    return a + b;
}


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

    int a = 1,b = 1;
    int c = add(a,b);
    std::cout << "template function result: " << c << std::endl;
    return 0;
}
