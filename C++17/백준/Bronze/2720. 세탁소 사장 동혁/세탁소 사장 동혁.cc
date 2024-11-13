#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    int testcase;
	cin >> testcase;
	for (int i = 0; i < testcase; i++)
	{
		int change;
		cin >> change;
		int Q = 0, D=0, N=0, P=0;
		Q = change / 25;
		change -= Q * 25;
		D = change / 10;
		change -= D *10;
		N = change / 5;
		change -= N * 5;
		P = change / 1;
		cout << Q << " " << D << " " << N << " " << P << "\n";
	}
    return 0;
}
