#ifndef OBSERVER_H
#define OBSERVER_H


class Observer
{
public:
    Observer();
    virtual void update(double ibmPrice,double applePrice,double googlePrice) = 0;
};

#endif // OBSERVER_H
