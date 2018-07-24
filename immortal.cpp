#include "immortal.h"
#include <iostream>
Immortal *Immortal::s_Instance = 0;

Immortal::Immortal()
{
    std::cout << "Class ctor" << std::endl;
}
Immortal *Immortal::getInstance()
{
    if (!s_Instance)
    {
        s_Instance = new Immortal();
    }
    return s_Instance;
}

