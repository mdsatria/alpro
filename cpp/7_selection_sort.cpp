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
        int jMin = i;
        for (j=i+1; j<size; j++)
        {
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