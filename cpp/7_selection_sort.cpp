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

    // tampilkan array
    printArray(A, size);

    /*SELECTION SORT*/
    int i, j, temp, jMin;
    for (i=0; i<size-1; i++)
    {
        // inisialisasi jMin dengan index ke-i
        jMin = i;
        for (j=i+1; j<size; j++)
        {
            //
            if (A[j]<A[jMin])
            {
                jMin = j;
            }
        }
        if (jMin!=i)
        {
            temp = A[i];
            A[i] = A[jMin];
            A[jMin] = temp;
        }
    }
    /*END OF SELECTION SORT*/

    // tampilkan hasil sorting
    printArray(A, size);
}