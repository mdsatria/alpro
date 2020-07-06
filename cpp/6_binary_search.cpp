// created by Made Satria Wibawa 2020

// import library untuk fungsi input output
#include <iostream>
// gunakan namespace pada iostream
using namespace std;

// deklarasi fungsi
int binarySearch(int arr[], int size, int num);

// fungsi utama
int main()
{
    // data array yang digunakan untuk tempat mencari nilai
    int A[] = {1,1,2,3,4,5};
    int s = sizeof(A) / sizeof(A[0]);
    // dua nilai yang akan dicari, yaitu num_1 = 1 dan num_2 = 10
    int num_1 = 1;
    int num_2 = 10;
     // variabel menampung indeks hasil pencarian
    int hasil;

    // gunakan fungsi linearSeach. tempat mencari di array A dengan elemen sebanyak 5, yang dicari adalah num_1 (1)
    hasil = binarySearch(A, s, num_1);
    // kondisi jika data yang dicari ada di array A
    if (hasil!=-1)
    {
        // tampilkan pesan berhasil ditemukan
        cout << "Bilangan " << num_1 << " ditemukan pada array A di index ke-" << hasil << endl;
    }
    // jika data tidak ditemukan pada array A 
    else
    {
        // tampilkan pesan tidak berhasil ditemukan
        cout << "Bilangan " << num_1 << " tidak ditemukan pada array A!" << endl;
    }

    // gunakan fungsi binarySeach. tempat mencari di array A dengan elemen sebanyak 5, yang dicari adalah num_2 (10)
    hasil = binarySearch(A, s, num_2);
    // kondisi jika data yang dicari ada di array A
    if (hasil!=-1)
    {
         // tampilkan pesan berhasil ditemukan
        cout << "Bilangan " << num_2 << " ditemukan pada array A di index ke-" << hasil << endl;
    }
     // jika data tidak ditemukan pada array A
    else
    {
         // tampilkan pesan tidak berhasil ditemukan
        cout << "Bilangan " << num_2 << " tidak ditemukan pada array A!" << endl;
    }
    

}

// fungsi binarySearch
// Mencari sebuah nilai 'num' di larik 1 dimensi 'arr' dengan jumlah elemen sebanyak 'size' dengan divide and conqueror
// Ouput adalah indeks 'arr' yang nilainya sama dengan 'num'
// Output adalah -1 jika tidak ada nilai 'num' pada 'arr'
// Parameter :
//          arr : array of integer. data harus terurut dari kecil ke besar
//          size : jumlah elemen pada array arr
//          num : nilai yang akan dicari
int binarySearch(int arr[], int size, int num)
{
    // deklarasi variabel result untuk menampung hasil pencarian. 
    // nilai default adalah -1
    int result = -1;
    // variabel left untuk indeks pertama pada sub-array
    int left = 0;
    // variabel right untuk indeks terakhir pada sub-array
    int right = size-1;
    // variabel middle untuk indeks tengah pada sub-array
    int middle;

    // perulangan hingga ukuran sub-array menjadi satu elemen
    while (left<=right)
    {
        // cari indeks tengah pada sub-array
        middle = (left + right) / 2;
        // bandingkan nilai 'num' dengan larik 'arr' pada indeks ke-middle. TRUE jika sama
        if (num==arr[middle])
        {
            // jika sama maka hasil diubah nilainya dengan middle
            result = middle;
        }

        // cek apakah nilai 'num' lebih besar daripada nilai 'arr' pada indeks ke-middle. TURE jika lebih besar
        if (num>arr[middle])
        {
            // jika kondisi benar maka indeks pertama sub-array menjadi middle+1
            left = middle + 1;
        }
        // jika kondisi salah
        else
        {
            // indeks terakhir pada sub-array menjadi middle
            right = middle - 1;
        }
    }
    // kembalikan nilai default hasil (-1).
    // artinya perulangan telah selesai pada semua elemen 'arr', data tidak ditemukan
    return result;
}

