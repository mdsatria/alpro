#include <iostream>
#include "6_funcSearch.cpp"
using namespace std;

int main()
{
    // data array yang digunakan untuk tempat mencari nilai
    int A[5] = {4,2,3,1,8};
    // dua nilai yang akan dicari, yaitu num_1 = 2 dan num_2 = 10
    int num_1 = 2;
    int num_2 = 10;
    // variabel menampung indeks hasil pencarian
    int hasil;

    // gunakan fungsi binarySearch / linearSeach. tempat mencari di array A dengan elemen sebanyak 5, yang dicari adalah num_1 (2)
    hasil = linearSearch(A, 5, num_1);
    // hasil = binarySearch(A, 5, num_1);
    // kondisi jika data yang dicari ada di array A
    if (hasil!=-1)
    {
        // tampilkan pesan berhasil ditemukan
        cout << "Bilangan " << num_1 << " ditemukan pada array A!" << endl;
    }
    // jika data tidak ditemukan pada array A
    else
    {
        // tampilkan pesan tidak berhasil ditemukan
        cout << "Bilangan " << num_1 << " tidak ditemukan pada array A!" << endl;
    }

    // gunakan fungsi binarySearch /  linearSeach. tempat mencari di array A dengan elemen sebanyak 5, yang dicari adalah num_2 (10)
    hasil = linearSearch(A, 5, num_2);
    // kondisi jika data yang dicari ada di array A
    if (hasil!=-1)
    {
        // tampilkan pesan berhasil ditemukan
        cout << "Bilangan " << num_2 << " ditemukan pada array A!" << endl;
    }
    // jika data tidak ditemukan pada array A
    else
    {
        // tampilkan pesan tidak berhasil ditemukan
        cout << "Bilangan " << num_2 << " tidak ditemukan pada array A!" << endl;
    }   
}