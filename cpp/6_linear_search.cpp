// created by Made Satria Wibawa 2020

// import library untuk fungsi input output
#include <iostream>
// gunakan namespace pada iostream
using namespace std;

// deklarasi fungsi
int linearSearch(int arr[], int size, int num);

// fungsi utama
int main()
{
    // data array yang digunakan untuk tempat mencari nilai
    int A[5] = {4,2,3,1,8};
    // dua nilai yang akan dicari, yaitu num_1 = 2 dan num_2 = 10
    int num_1 = 2;
    int num_2 = 10;
    // variabel menampung indeks hasil pencarian
    int hasil;

    // gunakan fungsi linearSeach. tempat mencari di array A dengan elemen sebanyak 5, yang dicari adalah num_1 (2)
    hasil = linearSearch(A, 5, num_1);
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

    // gunakan fungsi linearSeach. tempat mencari di array A dengan elemen sebanyak 5, yang dicari adalah num_2 (10)
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

// fungsi linearSearch
// Mencari sebuah nilai 'num' di larik 1 dimensi 'arr' dengan jumlah elemen sebanyak 'size'
// Ouput adalah indeks 'arr' yang nilainya sama dengan 'num'
// Output adalah -1 jika tidak ada nilai 'num' pada 'arr'
// Parameter :
//          arr : array of integer
//          size : jumlah elemen pada array arr
//          num : nilai yang akan dicari
int linearSearch(int arr[], int size, int num)
{   
    // deklarasi variabel hasil untuk menampung hasil pencarian. 
    // nilai default adalah -1
    int hasil = -1;
    // deklarasi variabel i  untuk counter
    int i = 0;

    // perulangan sebanyak jumlah elemen di 'arr'
    for (i=0; i<size; i++)
    {
        // bandingkan nilai 'num' dengan larik 'arr' pada indeks ke-i. TRUE jika sama
        if (num==arr[i])
        {
            // jika sama maka hasil diubah nilainya dengan nilai i
            hasil = i;
            // stop perulangan, kembalikan nilai hasil
            return hasil;
        }
    }
    // kembalikan nilai default hasil (-1).
    // artinya perulangan telah selesai sampai elemen akhir pada 'arr', data tidak ditemukan
    return hasil;
}

