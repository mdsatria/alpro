// created by Made Satria Wibawa 2020

// import library untuk fungsi input output
#include <iostream>
// gunakan namespace pada iostream
using namespace std;

// fungsi utama
int main()
{
    // inisialisasi variabel a dengan tipe integer
    int a, b, temp;

    // assign nilai 1 ke variabel a
    a = 1;
    // tampilkan nilai a
    cout << "Nilai a = " <<  a << endl;

    // assign nilai 2 ke variabel a
    a = 2;
    // tampilkan nilai a
    cout << "Nilai a = " << a << endl;

    // tambah nilai a dengan 3
    a = a + 3;
    // tampilkan nilai a
    cout << "Nilai a = " << a << endl;

    // assign nilai 5 ke variabel a
    a = 5;
    // assign nilai 1 ke variabel b
    b = 1;
    // tampilkan nilai a dan b
    cout << "Nilai a = " << a << ". Nilai b = " << b << endl;
    // assign nilai a ke temp
    temp = a;
    // assign nilai b ke a
    a = b;
    // assign nilai a ke b
    b = temp;
    // tampilkan nilai a dan b
    cout << "Nilai a = " << a << ". Nilai b = " << b << endl;

    // tampilkan pesan untuk meminta inputan user
    cout << "Masukkan sebuah nilai bilangan bulat = ";
    // assign input user ke variabel a
    cin >> a;
    // tampilkan nilai a
    cout << "Anda memasukkan angka " << a;
    
}