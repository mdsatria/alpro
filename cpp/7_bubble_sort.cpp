// created by Made Satria Wibawa 2020

// import library untuk fungsi input output
#include <iostream>
// gunakan namespace pada iostream
using namespace std;

void printArray(int arr[], int size);


// fungsi utama
int main()
{
    int A[] = {5,3,2,4,1};
    int size = sizeof(A)/sizeof(A[0]);
    int i, j, temp;

    printArray(A, size);

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
    printArray(A, size);
}

void printArray(int arr[], int size)
{
    int i;

    cout << "Nilai array adalah = ";
    for (i=0; i<size; i++)
    {
        cout << arr[i] << " "; 
    }
    cout << endl;
}