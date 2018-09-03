#include "engine.h"
#include <iostream>
#include "messages.h"
#include "messagecentral.h"
#include "cartoonmessages.h"
#include "testonly.h"
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <thread>
#include <pthread.h>
#include "immortal.h"
#include "singleton_p.h"
#include "operations.h"
#include "linkedlist.h"

Engine::Engine()
{
}

void Engine::execute()
{
    std::cout << "Fuck you,world!" << std::endl;
    TestOnly object;
    std::string mata = "ana a ramas fara mere";
    object.userMessage(mata);
    messages mainMessage;
    mainMessage.startMessage();

    //In order to access static class methods the correct accest is the namespace one i.e. "::"
    messages::classMessage();

    int total = 0;

    // std::vector<int> values = {0 ,1 ,2 ,3 ,4 ,5 };
    std::vector<int> nums{3, 4, 2, 8, 15, 267};

    nums.push_back(2);

    //auto print = [&](const int& n) { total += n; };
    std::for_each(nums.begin(), nums.end(), [&](const int& n) { total += n; });
    std::cout<< "total is: "<<total<<std::endl;


    //    std::thread t1(print);
    //    //int numarThreaduri = t1.hardware_concurrency();
    //    t1.join();

    //    std::cout<<"t1.hardware_concurrency(): "<< t1.hardware_concurrency() <<std::endl;

    struct solution
    {
        int alfa = 1;
        int beta = 2;
    };


    solution structTest;
    std::cout<< structTest.beta <<std::endl;

    int aa = 1,bb,cc;

    (aa == 1) ? (printParam(),bb = aa) : (printParam(), cc = 2);
    std::cout << aa << bb << cc <<std::endl;

    Immortal* onlyOne = Immortal::getInstance();
    (void) onlyOne;
    Singleton_P* mySingleton = Singleton_P::getInstance();
    (void) mySingleton;
    Singleton_P* mySeccondSingleton = Singleton_P::getInstance();
    (void) mySeccondSingleton;

    int testIntegerContainer[] = {55,1,4,77,32,11,8,22,4,6,2};
    std::cout << "Array before sorting " << std::endl;
    Operations::PrintArray(testIntegerContainer,11);
    Operations::MergeSort(testIntegerContainer,11);
    std::cout << "Array after sorting " << std::endl;
    Operations::PrintArray(testIntegerContainer,11);


}

void Engine::executeOperation()
{
    Operations myTestOperations;
    std::vector<int> nums{3, 4, 2, 8, 15, 267};
    std::vector<int> moreNums{3, 4, 5, 7, 2,2, 14, 2, 8, 15, 267,2,2,2,2,2,267};
    std::vector<int> myResultNums = myTestOperations.missingNumbers(nums,moreNums);
    for(uint i = 0;i < myResultNums.size();i++)
    {
        std::cout << myResultNums[i] << " "<<std::endl;
    }
}

void Engine::executeList()
{
    LinkedList order;
    for (int i = 1;i <= 10;i++)
    {
        order.addNode(i);
    }
    order.delete_position(4);
    order.display();
}

void Engine::printAgain()
{
    for(int i = 0;i < 10;i++)
    {
        std::cout <<"From t2: "<< i << std::endl;
    }

}

void Engine::print()
{
    for(int i = 0; i <= 100; i++)
    {
        std::cout<< "From t1: "<< i << std::endl;
    }
}

void Engine::printParam()
{
    std::cout << "first param" <<std::endl;
}
