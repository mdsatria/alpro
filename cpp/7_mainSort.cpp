#include <iostream>
#include "7_funcSort.cpp"
#include "utils.cpp"
using namespace std;

int main()
{
    // deklarasi variabel
    int A[] = {5,3,2,4,1};
    int size = sizeof(A)/sizeof(A[0]);
    int i, j, temp;

    printArray(A, size);
    bubbleSort(A,size);
    // insertionSort(A,size);
    // selectionSort(A,size);
    printArray(A, size);

}