#include <iostream>

using namespace std;
int main() {
	int* seats = new int[30]();
	int* seats_check = new int[29]();
	int* no_seat = new int[30]();
	//출석부 초기화, seats = 1 부터 30까지 30개
	for (int i = 0; i < 30; i++)
	{
		seats[i] = i+1;
	}
	//출석 입력 받기, seats_check = 28개
	for (int i = 0; i < 28; i++)
	{
		cin >> seats_check[i];
	}

	//출석 확인
	int no_index = 0;
	for (int i = 0; i < 30; i++)
	{
		int check = 0;
		for (int j = 0; j < 28; j++)
		{
			if (seats[i] == seats_check[j]) {
				check = 1;
			}
		}
		if (check == 0) {
			no_seat[no_index] = seats[i];
			no_index++;
		}
	}
	for (int i = 0; i < no_index; i++)
	{
		cout << no_seat[i] << "\n";
	}
	return 0;
}