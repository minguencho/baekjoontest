#include <iostream>
#include <string>
using namespace std;

int main() {
	int correct_chess[6] = {1,1,2,2,2,8};
	int* lost_chess = new int[6];
	for (int i = 0; i < 6; i++)
	{
		int input_number;
		cin >> input_number;
		lost_chess[i] = correct_chess[i] - input_number;
	}
	for (int i = 0; i < 6; i++)
	{
		cout << lost_chess[i] << " ";
	}
}
