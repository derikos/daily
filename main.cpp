#include <iostream>
#include "engine.h"
#include <thread>

int main()
{
    std::thread engineTread(Engine::executeList);
    engineTread.join();

    return 0;
}
