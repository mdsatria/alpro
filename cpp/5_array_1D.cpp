// import library untuk fungsi input output
#include <iostream>
#include "5_funcArray.cpp"
// gunakan namespace pada iostream
using namespace std;

// fungsi utama
int main()
{
    
    int A[5];
    int n = sizeof(A) / sizeof(A[0]);

    // panggil procedure readArray() untuk memasukkan input dari user ke array A
    readArray(A, n);
    // panggil procedure printArray() untuk mencetak semua nilai dari array A
	printArray(A, n);
    // panggil function findMax() untuk mencari kemudian tampilkan nilai terbesar di array A
	cout << "Bilangan terbesar adalah : " << findMax(A, n) << endl;
    // panggil function findMin() untuk mencari kemudian tampilkan nilai terkecil di array A
    cout << "Bilangan terkecil adalah : " << findMin(A, n) << endl;
    // panggil procedure reverseArray() untuk membalikkan posisi elemen pada array A
    reverseArray(A, n);
    // tampilkan hasil reverseArray()
    printArray(A, n);

}