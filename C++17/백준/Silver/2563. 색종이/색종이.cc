#include <iostream>
#include <string>
using namespace std;

int main() {
	bool max[100][100] = { false };
	int paper_number = 0, width = 0 ;
	cin >> paper_number;

	for (int i = 0; i < paper_number; i++)
	{
		int x = 0, y = 0;
		cin >> x >> y;
		for (int a = y; a < y+10; a++)
		{
			for (int b = x; b < x+10; b++)
			{
				max[a][b] = true;
			}
		}
	}
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			if (max[i][j]) {
				width++;
			}
		}
	}
	cout << width;
}
