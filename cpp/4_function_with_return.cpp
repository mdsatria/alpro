// created by Made Satria Wibawa 2020

// import library untuk fungsi input output
#include <iostream>
// gunakan namespace pada iostream
using namespace std;

// deklarasi fungsi
double hitungVolumeKubus(double sisi);

// fungsi utama
int main()
{
    // deklrasi variabel untuk menampung hasil
    double volume;
    // call fungsi hitungVolumeKubus dengan parameter sisi kubus sepanjang 20.2
    volume = hitungVolumeKubus(20.2);
    // tampilkan hasil perhitungan volume kubus dengan perhitungan fungsi hitungVolumeKubus
    cout << "volume kubus adalah = " << volume ;
    
    return 0;
}

// definisi fungsi hitungVolumeKubus dengan parameter sisi, tipe data double
double hitungVolumeKubus(double sisi)
{
    // definisi variabel
    double hasil;
    // perhitungan volume
    hasil = sisi * sisi * sisi;
    // kembalikan nilai
    return hasil;
}

