// created by Made Satria Wibawa 2020

// import library untuk fungsi input output
#include <iostream>
// gunakan namespace pada iostream
using namespace std;

// fungsi utama
int main()
{
    // deklarasi variabel counter untuk for loop
    int i;
    // perulangan sebanyak 5 kali
    for (i=0; i<5; i++)
    {
        cout << "Perulangan menggunakan for. Perulangan ke-" << i+1 << endl;
    }


    // deklarasi variabel counter untuk while loop
    int j = 0;
    // perulangan sebanyak 5 kali. 
    while (j<5)
    {
        cout << "Perulangan menggunakan while. Perulangan ke-" << j+1 << endl;
        j++;
    }
    
    
    int k = 0;
    do
    {
        cout << "Perulangan menggunakan do while. Perulangan ke-" << k+1 << endl;
        k++;
    } while (k<5);
    
}