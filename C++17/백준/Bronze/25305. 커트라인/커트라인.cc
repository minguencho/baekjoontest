#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N, K;
	cin >> N >> K;
	vector<int> arr(N);
	// 점수 받기
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	// 점수 정렬
	sort(arr.begin(), arr.end());

	cout << arr[arr.size() - K] << '\n';
}

