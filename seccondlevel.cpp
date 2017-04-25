#include "seccondlevel.h"
#include "derived.h"

SeccondLevel::SeccondLevel(int rows, int columns) :
    Derived(rows,columns)
{
    std::cout<<"This is SeccondLevel's constructor"<<std::endl;
}
