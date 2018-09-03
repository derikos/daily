#include "operations.h"
#include <iostream>
#include <vector>
#include <stdio.h>

using std::vector;

Operations::Operations()
{

}

int Operations::findVectorIndex(/*std::vector<>*/)
{
    return 1;
}

void Operations::PrintArray(int *array, int n)
{
    for (int i = 0; i < n; ++i)
    {
        std::cout << array[i] << " " << std::flush;
        std::cout << std::endl;
    }
}

void Operations::Merger(int arr[], int lo, int mi, int hi)
{
    int *temp = new int[hi-lo+1];//temporary merger array
    int i = lo, j = mi + 1;//i is for left-hand,j is for right-hand
    int k = 0;//k is for the temporary array

    while(i <= mi && j <= hi)
    {
        if(arr[i] <= arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
        }
    }

    //rest elements of left-half
    while(i <= mi)
    {
        temp[k++] = arr[i++];
    }

    //rest elements of right-half
    while(j <= hi)
    {
        temp[k++] = arr[j++];
    }

    //copy the mergered temporary array to the original array
    for(k = 0, i = lo; i <= hi; ++i, ++k)
    {
        arr[i] = temp[k];
    }

    delete []temp;

}

void Operations::MergeSortHelper(int arr[], int lo, int hi)
{
    int mid;
    if(lo < hi)
    {
        mid = (lo + hi) >> 1;
        MergeSortHelper(arr, lo, mid);
        MergeSortHelper(arr, mid+1, hi);
        Merger(arr, lo, mid, hi);
    }
}

void Operations::MergeSort(int arr[], int arr_size)
{
    MergeSortHelper(arr, 0, arr_size-1);
}


std::vector<int> Operations::missingNumbers(vector<int> arr, vector<int> brr) {

    //int missingDigits = brr.size() - arr.size();
    for(int it = 0 ;it < arr.size();it ++)
    {
        for (int j = 0;j < brr.size();j++)
        {
            if (arr[it] == brr[j])
            {
                brr.erase(brr.begin() + j);
                break;
            }
        }
    }
    for(int i = 0;i < brr.size() - 1;i++)
    {
        for (int j = i+1; j < brr.size(); j++)
        {
            if(brr[i] == brr[j])
            {
                brr.erase(brr.begin() + (j));
                --i;
                break;
            }
        }
    }
    for (int i = 0; i < brr.size(); i++)

        // Last i elements are already in place
        for (int j = 0; j < brr.size() - 1; j++)
            if (brr[j] > brr[j+1])
            {
                std::swap(brr[j], brr[j+1]);
            }

    return brr;

}


