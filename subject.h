#ifndef SUBJECT_H
#define SUBJECT_H

#include "observer.h"

class Subject
{
public:
    Subject();
    virtual void registerObserver(Observer*) = 0;
    virtual void unRegisterObserver(int index) = 0;
    virtual void notifyObserver() = 0;
};

#endif // SUBJECT_H
