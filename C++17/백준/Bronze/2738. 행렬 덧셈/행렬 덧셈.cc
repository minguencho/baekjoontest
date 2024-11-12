#include <iostream>
#include <string>
using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	int A[100][100];
	int B[100][100];
	int C[100][100];

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			int inputN;
			cin >> inputN;
			A[i][j] = inputN;
		}
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			int inputN;
			cin >> inputN;
			B[i][j] = inputN;
		}
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cout << A[i][j] + B[i][j] << " ";
		}
		cout << "\n";
	}
}
