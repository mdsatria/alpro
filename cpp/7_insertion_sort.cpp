// created by Made Satria Wibawa 2020

// import library untuk fungsi input output
#include <iostream>
#include "utils.cpp"
// gunakan namespace pada iostream
using namespace std;

// deklarasi fungsi printArray
void printArray(int arr[], int size);


// fungsi utama
int main()
{
    // deklarasi variabel
    int A[] = {5,3,2,4,1};
    int size = sizeof(A)/sizeof(A[0]);
    int i, j, temp;

    // tampilkan array
    printArray(A, size);

    /*INSERTION SORT*/
    i = 1;
    while(i<size)
    {
        j = i;
        while ((j>0) && (A[j-1]>A[j]))
        {
            temp = A[j];
            A[j] = A[j-1];
            A[j-1] = temp;

            j = j -1;
        }
        i = i + 1;
    }   
    /*END OF INSERTION SORT*/

    // tampilkan hasil sorting
    printArray(A, size);
}