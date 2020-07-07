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
    // inisialisasi data input ke dalam variabel A
    int A[] = {5,3,2,4,1};
    // hitung jumlah elemen array A
    int size = sizeof(A)/sizeof(A[0]);
    // inisialisasi variabel yang dibutuhkan untuk proses sorting
    // i dan j untuk looping, temp untuk proses swap nilai
    int i, j, temp;

    // tampilkan data input, yaitu array A
    printArray(A, size);


    /*BUBBLE SORT*/
    for (i=0; i<size-1; i++)
    {
        for (j=0; j<size-1; j++)
        {
            if (A[j]>A[j+1])
            {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
    /*END OF BUBBLE SORT*/

    // tampilkan hasil sorting
    printArray(A, size);
}