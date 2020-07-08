// import library untuk fungsi input output
#include <iostream>
// gunakan namespace pada iostream
using namespace std;

void printArray(int arr[], int size)
{
    for (int i=0; i<size; i++)
    {
        cout << arr[i] << " "; 
    }
    cout << endl;
}