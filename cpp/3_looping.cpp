// import library untuk fungsi input output
#include <iostream>
// gunakan namespace pada iostream
using namespace std;

// fungsi utama
int main()
{
    // perulangan sebanyak 5 kali
    for (int i=0; i<5; i++)
    {
        cout << "Perulangan menggunakan for. Perulangan ke-" << i+1 << endl;
    }

    // deklarasi variabel counter dan kondisi untuk while loop
    bool cond = true;
    int j = 1;
    // perulangan sebanyak 5 kali. 
    while (cond)
    {
        cout << "Perulangan menggunakan while. Perulangan ke-" << j << endl;
        j++;
        if(j>5)
        {
            cond = false;
        }
    }
    
    
    int k = 0;
    do
    {
        cout << "Perulangan menggunakan do while. Perulangan ke-" << k+1 << endl;
        k++;
    } while (k<5);
    
}