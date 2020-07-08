// import library untuk fungsi input output
#include <iostream>
// gunakan namespace pada iostream
using namespace std;

// fungsi utama
int main()
{

   int B[3][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15}
    };

    for (int i=0; i<3; i++)
    {
        for (int j=0; j<5; j++)
        {
            cout << B[i][j] << " " ;
        }
        cout << endl;
    }
}