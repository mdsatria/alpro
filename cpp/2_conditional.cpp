// import library untuk fungsi input output
#include <iostream>
// gunakan namespace pada iostream
using namespace std;

// fungsi utama
int main()
{

    int a = 5;
    int b = 2;

    // if
    if (a>b)
    {
        cout << "nilai a lebih besar daripada b " << endl;
    }

    // if-else
    if (a<b)
    {
        cout << "nilai a lebih kecil daripada b " << endl;
    }
    else
    {
        cout << "nilai a lebih besar daripada b " << endl;
    }
    
    // if-else if-else
    if (a<b)
    {
        cout << "nilai a lebih kecil daripada b " << endl;
    }
    else if (a>b)
    {
        cout << "nilai a lebih besar daripada b " << endl;
    }
    else
    {
        cout << "nilai a sama dengan b " << endl;
    }  

    int day = 4;
    switch (day) 
    {
        case 1:
            cout << "Januari";
            break;
        case 2:
            cout << "Februari";
            break;
        case 3:
            cout << "Maret";
            break;
        case 4:
            cout << "April";
            break;
        case 5:
            cout << "Mei";
            break;
        case 6:
            cout << "Juni";
            break;
        case 7:
            cout << "Juli";
            break;
        case 8:
            cout << "Agustus";
            break;
        case 9:
            cout << "September";
            break;
        case 10:
            cout << "Oktober";
            break;
        case 11:
            cout << "November";
            break;
        case 12:
            cout << "Desember";
            break;
        default:
            cout << "Input salah";
            break;
    }
}
