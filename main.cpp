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

//using namespace std;

template <class T>
T add(T a,T b)
{
    return a + b;
}

void printAgain()
{
    for(int i = 0;i < 10;i++)
    {
        std::cout<<"From t2: "<<i<<std::endl;
    }
}

void print()
{
    for(int i = 0; i<= 100; i++)
    {
        std::cout<< "From t1: "<< i << std::endl;
    }
    std::thread t2(printAgain);
    t2.join();
}

void printParam()
{
    std::cout << "first param" <<std::endl;
}
int main()
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

    int total = 0;

    // std::vector<int> values = {0 ,1 ,2 ,3 ,4 ,5 };
    std::vector<int> nums{3, 4, 2, 8, 15, 267};

    nums.push_back(2);

    //auto print = [&](const int& n) { total += n; };
    std::for_each(nums.begin(), nums.end(), [&](const int& n) { total += n; });
    std::cout<< "total is: "<<total<<std::endl;


    std::thread t1(print);
    //int numarThreaduri = t1.hardware_concurrency();
    t1.join();

    std::cout<<"t1.hardware_concurrency(): "<< t1.hardware_concurrency() <<std::endl;

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

    return 0;
}
