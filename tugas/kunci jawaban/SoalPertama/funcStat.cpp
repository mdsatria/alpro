#include <iostream>
using namespace std;

// print array 1d
void printArray(int arr[], int size)
{	
	cout << "elemen array : ";
	for(int i = 0; i < size; i++)
	{
		cout << arr[i] << " " ;
	}
	cout << endl;
}

/*function untuk menghitung rerata dari suatu array of integer*/
float hitungRerata(int arr[], int size)
{
	// deklarasi dan inisialisasi variabel rerata
	float rerata = 0;

	// perulangan sebanyak jumlah elemen pada array
	for(int i = 0; i < size; i++)
	{
		// lakukan perhitungan tambah semua elemen pada array
		rerata = rerata + arr[i];
	}

	// bagi nilai sum elemen array dengan jumlah elemen array
	rerata = rerata / size;

	// kembalikan nilai rerata
	return rerata;
}

/*function untuk menghitung variance dari array of integer*/
float hitungVariance(int arr[], int size)
{
	// panggil function hitungRerata untuk mendapatkan rerata
	float rerata = hitungRerata(arr, size);
	// inisialisasi variabel untuk menampung hasil variance
	float variant;

	// perulangan untuk perhitungan jarak data ke reratanya
	for(int i = 0; i < size; i++)
	{
		// summation nilai variance
		variant = (arr[i] - rerata) * (arr[i] - rerata);
	}

	// bagi summation variance dengan ukuran data
	variant = variant / size;

	// kembalikan hasil
	return variant;
}