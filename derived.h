#ifndef DERIVED_H
#define DERIVED_H

#include "purerandom.h"


class Derived : public PureRandom
{
public:
    Derived(int columns,int rows);
};

#endif // DERIVED_H
