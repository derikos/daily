#include "algorithms.h"
#include <iostream>

Algorithms::Algorithms()
{

}

void Algorithms::insertionSorting(int customArray[], int sizeOfArray)
{
    int temporaryValue = 0;
    int j = 0;

    for(int i = 1;i < sizeOfArray;i++)
    {
        j = i -1;
        while((customArray[i] < (customArray[j])) && !(j < 0))
        {
            temporaryValue = customArray[j];
            customArray[j] = customArray[i];
            customArray[i] = temporaryValue;
            --i;
            --j;
        }
    }
}

void Algorithms::selectionSorting(int customArray[], int sizeOfArray)
{
    ;
    int temporaryValue = 0;
    int index = 0;
    for (int j = 0;j < sizeOfArray;j++)
    {
        int minimumValue = customArray[j];
        for (int i = j+1 ;i < sizeOfArray - 1;i++)
        {
            if (customArray[i] < minimumValue)
            {
                minimumValue = customArray[i];
                index = i;
            }
        }
        if (minimumValue < customArray[j])
        {
            temporaryValue = customArray[j];
            customArray[j] = minimumValue;
            customArray[index] = temporaryValue;
        }
    }

}

void Algorithms::bubbleSorting(int customArray[], int sizeOfArray)
{
    int temp = 0;
   for (int i = 1;i < sizeOfArray; i++)
   {
       for (int j = sizeOfArray -1;j >= i;j--)
       {
           if (customArray[j-1] > customArray[j])
           {
              temp = customArray[j-1];
              customArray[j-1] = customArray[j];
              customArray[j] = temp;
           }
       }
   }
}

void Algorithms::printArray(int customArray[], int sizeOfArray)
{
    for (int i = 0;i < sizeOfArray;i++)
    {
        std::cout << customArray[i] << ' ';
    }
    std::cout<<std::endl;
}
