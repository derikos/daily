#ifndef STOCKGRABBER_H
#define STOCKGRABBER_H

#include "subject.h"
#include "vector"

class StockGrabber : public Subject
{
public:
    StockGrabber();
    void setIbmPrice(double newPrice);
    void setApplePrice(double newPrice);
    void setGooglePrice(double newPrice);
private:
    std::vector<Observer*> observers;
    double ibmPrice;
    double applePrice;
    double googlePrice;
    static int maxVectorIndex;

public:
    void registerObserver(Observer* newObserver);
    void unRegisterObserver(int deleteObserver);
    void notifyObserver();
};

#endif // STOCKGRABBER_H
