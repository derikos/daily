#include "singleton_p.h"
#include <iostream>

Singleton_P* Singleton_P::instance = nullptr;
int Singleton_P::n_Instances = 0;

Singleton_P::Singleton_P()
{
    n_Instances++;
    std::cout << "Singleton private constructor  << "<<n_Instances << " >>" << std::endl;
}

Singleton_P* Singleton_P::getInstance()
{
    if(instance == nullptr)
    {
        instance = new Singleton_P();
    }
    return instance;
}
