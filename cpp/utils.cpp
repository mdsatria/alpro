// import library untuk fungsi input output
#include <iostream>
// gunakan namespace pada iostream
using namespace std;

void printArray(int arr[], int size)
{
    int i;

    for (i=0; i<size; i++)
    {
        cout << arr[i] << " "; 
    }
    cout << endl;
}