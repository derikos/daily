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

//using namespace std;

template <class T>
T add(T a,T b)
{
    return a + b;
}

void print()
{
    for(int i = 0; i<= 100; i++)
    {
        std::cout<< "From t1: "<< i << std::endl;
    }
}
int main(int argc, char *argv[])
{
//    std::cout << "Fuck you,world!" << std::endl;
//    std::string myFileName = "Batman.txt";
//    TestOnly object;
//    std::string mata = "ana a ramas fara mere";
//    object.userMessage(mata);
//    messages mainMessage;
//    mainMessage.startMessage();

//    //In order to access static class methods the correct accest is the namespace one i.e. "::"
//    messages::classMessage();

//    int a = 1,b = 1;
//    int c = add(a,b);
//    std::cout << "template function result: " << c << std::endl;

//    std::ofstream myFile(myFileName);

//    if (!myFile.is_open())
//    {
//        std::cout << "OMFG!!!" << std::endl;
//    } else {
//        myFile.open(myFileName);

//    }

//    myFile << "Acum punem ceva!";
//    myFile.close();

//    int total = 0;

//    // std::vector<int> values = {0 ,1 ,2 ,3 ,4 ,5 };
//    std::vector<int> nums{3, 4, 2, 8, 15, 267};

//    nums.push_back(2);

//    //auto print = [&](const int& n) { total += n; };
//    std::for_each(nums.begin(), nums.end(), [&](const int& n) { total += n; });
//    std::cout<< "total is: "<<total<<std::endl;


    std::thread t1(print);
    t1.join();


    return 0;
}
