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