// import library untuk fungsi input output
#include <iostream>
#include "8_funcRecursion.cpp"
// gunakan namespace pada iostream
using namespace std;

int recPerkalian(int a, int b);
int recFactorial(int a);

// fungsi utama
int main()
{
    int hasilFactorial, hasilKali, varFact, a, b;
    //hasil = recPerkalian(0, 2);
    //cout << hasil << endl;

    varFact = 8;
    hasilFactorial = recFactorial(varFact);
    cout << "Hasil factorial dari 8 adalah " << hasilFactorial << endl;

    a = 5; 
    b = 3;
    hasilKali = recPerkalian(a, b);
    cout << "Hasil perkalian dari bilangan " << a << " dan " << b << " adalah : " << hasilKali << endl;

}
