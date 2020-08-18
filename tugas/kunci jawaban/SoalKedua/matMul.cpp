#include <iostream>
using namespace std;

int main()
{
	// inisialisasi matrix A
	int A[2][3] = {
		{1, 2, 3},
		{4, 5, 6}
	};
	// inisialisasi matrix B
	int B[3][2] = {
		{7, 8},
		{9, 10},
		{11, 12}
	};
	// deklarasi matrix C
	int C[2][2];
	// deklarasi variabel bantuan untuk menampung perhitungan
	int temp;

	// dilihat dari bentuk matrix A dan B, maka perhitungan perkalian matrixnya mengikuti aturan sbb
	// C[0][0] = (A(0,0)*B(0,0) + A(0,1)*B(1,0) + A(0,2)*B(2,0))
	// C[0][1] = (A(0,0)*B(0,1) + A(0,1)*B(1,1) + A(0,2)*B(2,1))
	// C[1][0] = (A(1,0)*B(0,0) + A(1,1)*B(1,0) + A(1,2)*B(2,0))
	// C[1][1] = (A(1,0)*B(0,1) + A(1,1)*B(1,1) + A(1,2)*B(2,1))
	// index pertama dari matrix A akan menggunakan variabel i
	// index kedua dari matrix A akan menggunakan variabel k
	// index pertama dari matrix B akan menggunakan variabel k
	// index kedua dari matrix B akan menggunakan variabel j
	for(int i = 0; i < 2; i++)
	{		
		for(int j = 0; j < 2; j++)
		{
			// inisialisasi variabel temp dengan 0
			// nilai temp akan direset menjadi 0 setiap satu nilai pada index C dihitung
			temp = 0;						
			for(int k = 0; k < 3; k++)
			{
				// lakukan summation dalam
				temp = temp + (A[i][k] * B[k][j]);				
			}
			// tampung hasil ke matrix C
			C[i][j] = temp;
		}
	}

	// print matrix hasil perhitungan
	for(int i = 0; i < 2; i++)
	{
		for(int j = 0; j < 2; j++)
		{
			cout << C[i][j] << " ";
		}
		cout << endl;
	}

}