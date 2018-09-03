#ifndef OPERATIONS_H
#define OPERATIONS_H
#include <vector>

class Operations
{
public:
    Operations();
    static int findVectorIndex();
    static void PrintArray(int * array, int n);
    static void Merger(int arr[], int lo, int  mi, int hi);
    static void MergeSortHelper(int arr[], int lo, int hi);
    static void MergeSort(int arr[], int arr_size);
    std::vector<int> missingNumbers(std::vector<int> arr, std::vector<int> brr);
};

#endif // OPERATIONS_H
