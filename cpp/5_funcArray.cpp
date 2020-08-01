// import library untuk fungsi input output
#include <iostream>
// gunakan namespace pada iostream
using namespace std;


// procedure untuk print array 1D
void printArray(int arr[], int size)
{
    for (int i=0; i<size; i++)
    {
        cout << arr[i] << " "; 
    }
    cout << endl;
}

// function untuk mencari nilai maksimal dari array of integer 1D
int findMax(int arr[], int size)
{
	int nilaiMaks = arr[0];

	for(int i = 1; i <  size; i++)
	{
		if(arr[i] > nilaiMaks)
		{
			nilaiMaks = arr[i];
		}
	}

	return nilaiMaks;
}

// function untuk mencari nilai minimal dari array of integer 1D
int findMin(int arr[], int size)
{
	int nilaiMin = arr[0];

	for(int i = 1; i <  size; i++)
	{
		if(arr[i] < nilaiMin)
		{
			nilaiMin= arr[i];
		}
	}

	return nilaiMin;
}

// procedure untuk membalikkan nilai array of integer 1D
void reverseArray(int arr[], int size)
{
	int start = 0;
	int end = size - 1;
	int temp;

	while(start < end)
	{
		temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;

		start++;
		end--;
	}
}


// procedure membaca array dari user
// array arr harus ditentukan panjang elemennnya
// contoh penggunaan
// int A[5];
// readArray(A, 5);
void readArray(int arr[], int size)
{
	for(int i = 0; i < size; i++)
	{
		cout << "Masukkan array index ke-" << i << " : ";
		cin >> arr[i];
	}
}