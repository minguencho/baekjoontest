#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int count;
	cin >> count;
	vector<int> n(count); // vector 생성 시 크기 할당
	for (int i = 0; i < count; i++) {
		cin >> n[i];
	}
	sort(n.begin(), n.end()); // 정렬 알고리즘 사용
	for (int x : n) {
		cout << x << '\n';
	}
}