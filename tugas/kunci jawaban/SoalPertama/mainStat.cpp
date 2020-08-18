#include <iostream>
#include "funcStat.cpp"
using namespace std;

int main()
{
	
	int A[] = {7, 8, 9, 10, 11, 12, -1};
	int n = sizeof(A) / sizeof(A[0]);

	printArray(A, n);
	cout << "rerata : " << hitungRerata(A, n) << endl;
	cout << "variance : " << hitungVariance(A, n);

}