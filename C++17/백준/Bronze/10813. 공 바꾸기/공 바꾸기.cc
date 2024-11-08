#include <iostream>

using namespace std;
int main() {
	int n, m, * buckets, in, out, k;
	cin >> n >> m;
	buckets = new int[n]();
	for (int i = 0; i < n; i++)
	{
		buckets[i] = i + 1;
	}
	for (int i = 0; i < m; i++)
	{
		cin >> in >> out;
		k = buckets[in-1];
		buckets[in-1] = buckets[out-1];
		buckets[out-1] = k;
	}
	for (int i = 0; i < n; i++)
	{
		cout << buckets[i] << " ";
	}
	return 0;
}