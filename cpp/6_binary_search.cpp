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
    int A[5] = {1,2,3,4,5};
    // dua nilai yang akan dicari, yaitu num_1 = 2 dan num_2 = 10
    int num_1 = 2;
    int num_2 = 10;
     // variabel menampung indeks hasil pencarian
    int hasil;

    // gunakan fungsi linearSeach. tempat mencari di array A dengan elemen sebanyak 5, yang dicari adalah num_1 (2)
    hasil = binarySearch(A, 5, num_1);
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
    hasil = binarySearch(A, 5, num_2);
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
    // deklarasi variabel hasil untuk menampung hasil pencarian. 
    // nilai default adalah -1
    int hasil = -1;
    // variabel i untuk indeks pertama pada sub-array
    int i = 0;
    // variabel j untuk indeks terakhir pada sub-array
    int j = size-1;
    // variabel m untuk indeks tengah pada sub-array
    int m;

    // perulangan hingga ukuran sub-array menjadi satu elemen
    while (i<j)
    {
        // cari indeks tengah pada sub-array
        m = (i+j)/2;
        // bandingkan nilai 'num' dengan larik 'arr' pada indeks ke-m. TRUE jika sama
        if (num==arr[m])
        {
            // jika sama maka hasil diubah nilainya dengan m
            hasil = m;
            // stop perulangan, kembalikan nilai hasil
            return hasil;
        }

        // cek apakah nilai 'num' lebih besar daripada nilai 'arr' pada indeks ke-m. TURE jika lebih besar
        if (num>arr[m])
        {
            // jika kondisi benar maka indeks pertama sub-array menjadi m+1
            i = m + 1;
        }
        // jika kondisi salah
        else
        {
            // indeks terakhir pada sub-array menjadi m
            j = m;
        }
    }
    // kembalikan nilai default hasil (-1).
    // artinya perulangan telah selesai sampai elemen akhir pada 'arr', data tidak ditemukan
    return hasil;
}

