#include <iostream>
#include <vector>
using namespace std;

int main() {
    int inputNumbers = 0;
	cin >> inputNumbers;
	int primeNumbers = 0;
	for (int i = 0; i < inputNumbers; i++)
	{
		int inputN = 0;
		int measureCount = 0;
		cin >> inputN;
		for (int j = 1; j <= inputN; j++)
		{
			if (inputN % j == 0) {
				measureCount++;
			}
		}
		if (measureCount == 2) {
			primeNumbers++;
		}
	}
	cout << primeNumbers;
    return 0;
}
