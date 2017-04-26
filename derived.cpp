#include "derived.h"

Derived::Derived(int columns, int rows) :
    PureRandom(columns,rows)
{
    std::cout<<"Derived Class Constructor doing some more things!"<<std::endl;
}
