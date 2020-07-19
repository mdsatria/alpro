// import library untuk fungsi input output
#include <iostream>
// gunakan namespace pada iostream
using namespace std;

// deklarasi procedure
void sayHi(string nama, int umur);

// fungsi utama
int main()
{
    // call procedure sayHi, masukkan "Made" sebagai ke parameter nama, masukkan 21 ke parameter umur
    sayHi("Made", 21);
    // call procedure sayHi, masukkan "Wayan" sebagai ke parameter nama, masukkan 45 ke parameter umur
    sayHi("Wayan", 45);
}

// definisi procedure sayHi
// procedure sayHi tidak mengembalikan sebuah nilai, bisa dilihat dari tipenya, yaitu void
// procedure ini memerlukan dua buah parameter untuk dapat dioperasikan, yaitu nama dan umur
void sayHi(string nama, int umur)
{
    // tampilkan pesan ke layar dengan menambahkan parameter nama dan umur
    cout << "Hai " << nama << "! Anda berumur " << umur << " tahun." << endl;
}