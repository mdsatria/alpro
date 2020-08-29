#include <iostream>
using namespace std;

// global variabel array of char untuk menampung huruf vokal
// global variabel berarti variabel ini dapat diakses di bagian mana saja di mainFunc.cpp
char vokal[5] = {'a', 'i', 'u', 'e', 'o'};

// deklarasi function
int hitungVokal(char arr[], int size);
int hitungKonsonan(char arr[], int size);
void printArray(char arr[], int size);

// main function
int main()
{
	// array input
	char input[] = {'a', 'd', 'u', 'h', 'a', 'i'};
	// ukuran array input
	int n = sizeof(input)/sizeof(input[0]);

	printArray(input, n);
	// panggil function dan print nilai
	cout << "Jumlah huruf vokal = " << hitungVokal(input, n) << endl;
	// panggil function dan print nilai
	cout << "Jumlah huruf konsonan = " << hitungKonsonan(input, n) << endl;
}


// function untuk menghitung jumlah huruf vokal
int hitungVokal(char arr[], int size)
{
	// inisialisasi variabel jumlah dengan nilai 0
	// variabel jumlah untuk menampung hasil perhitungan jumlah huruf vokal pada array
	int jumlah = 0;

	// perulangan di array input
	for(int i = 0; i < size; i++)
	{
		// perulangan pada array vokal
		for(int j = 0; j < 5; j++)
		{
			// jika nilai pada arr indeks ke-i adalah huruf vokal
			if(vokal[j] == arr[i])
			{
				// increment nilai jumlah
				jumlah++;
				// stop perulangan pada array vokal
				break;
			}
		}
	}
	// kembalikan jumlah huruf vokal pada array arr
	return jumlah;
}

// function untuk menghitung jumlah huruf konsonan pada array of char
// function ini membutuhkan function hitungVokal
// function ini mengembalikan ukuran input array dikurangi jumlah huruf vokal
int hitungKonsonan(char arr[], int size)
{
	// hitung jumlah huruf vokal dari array arr
	int nVokal = hitungVokal(arr, size);
	// kembalikan jumlah huruf konsonan
	// jumlah huruf konsonan = ukuran array - jumlah huruf vokal
	return size - nVokal;
}

// function untuk menampilkan semua elemen pada array input
void printArray(char arr[], int size)
{
	cout << "Array = [";
	for(int i = 0; i < size; i++)
	{
		cout << arr[i];
		if(i < size - 1)
		{
			cout << ", ";
		} 
	}
	cout << "]" << endl;
}
