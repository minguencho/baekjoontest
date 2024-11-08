#include <iostream>

using namespace std;
int main() {
	int *bucket, n, m ;
	cin >> n >> m;
	bucket = new int[n]();

	int st, end, ballN;
	for (int i = 0; i < m; i++)
	{
		cin >> st >> end >> ballN;
		if (st == end) {
			bucket[st-1] = ballN;
		}
		else{
			for (int j = st - 1; j < end; j++)
			{
				bucket[j] = ballN;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << bucket[i] << '\n';
	}
	return 0;
}