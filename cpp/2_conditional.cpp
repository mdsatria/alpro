// created by Made Satria Wibawa 2020

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
}
