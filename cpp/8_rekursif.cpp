// created by Made Satria Wibawa 2020

// import library untuk fungsi input output
#include <iostream>
// gunakan namespace pada iostream
using namespace std;

int recPerkalian(int a, int b);
int recFactorial(int a);


// fungsi utama
int main()
{
    int hasil;
    //hasil = recPerkalian(0, 2);
    //cout << hasil << endl;

    hasil = recFactorial(8);
    cout << hasil << endl;
}

int recPerkalian(int a, int b)
{
    if (b==0)
    {
        return 0;
    }
    else if (b==1)
    {
        return a;
    }
    else
    {
        return a + recPerkalian(a, b-1);
    }    
}

int recFactorial(int a)
{
    if ((a==0) || (a==1))
    {
        return 1;
    }
    else 
    {
        return a *  recFactorial(a-1);
    }

}