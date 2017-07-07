#include <iostream>
#include "messages.h"
#include "messagecentral.h"
#include "cartoonmessages.h"
#include "testonly.h"
#include "algorithms.h"

//using namespace std;

int main()
{
    std::cout << "Fuck you,world!" << std::endl;

    TestOnly object;
    std::string mata = "ana a ramas fara mere";

    int AnArray[6] = {6,5,0,3,2,1};
    Algorithms *testAlgorithms = new Algorithms;
    object.userMessage(mata);
    testAlgorithms->bubbleSorting(AnArray,6);
    testAlgorithms->printArray(AnArray,6);
    delete testAlgorithms;


    return 0;
}
