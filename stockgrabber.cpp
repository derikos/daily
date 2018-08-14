#include "stockgrabber.h"
#include <iostream>

int StockGrabber::maxVectorIndex = 0;

StockGrabber::StockGrabber()
{

}

void StockGrabber::setIbmPrice(double newPrice)
{
    if (ibmPrice != newPrice)
    {
        ibmPrice = newPrice;
        notifyObserver();
    }
}

void StockGrabber::setApplePrice(double newPrice)
{
    if (applePrice != newPrice)
    {
        applePrice = newPrice;
        notifyObserver();
    }
}

void StockGrabber::setGooglePrice(double newPrice)
{
    if (googlePrice != newPrice)
    {
        googlePrice = newPrice;
        notifyObserver();
    }
}

void StockGrabber::registerObserver(Observer *newObserver)
{
    observers.push_back(newObserver);
    maxVectorIndex++;
    std::cout << "New Observer registered ->> at index ->> " << maxVectorIndex << std::endl;
}

void StockGrabber::unRegisterObserver(int deleteObserver)
{
    observers.erase(observers.begin() + deleteObserver);
    maxVectorIndex--;
    std::cout << "Observer of index ->> " << deleteObserver <<" <<- removed " << std::endl
              << "Current max index is ->> " << maxVectorIndex << " <<-" << std::endl;
}

void StockGrabber::notifyObserver()
{
    //for all observers
    //observer.update

}
