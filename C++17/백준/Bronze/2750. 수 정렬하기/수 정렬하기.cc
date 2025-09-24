#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//삽입 정렬 함수
// 범위를 늘려가며 최소값을 배열 앞으로 놓자 !
void insert(vector<int>& arr) {
	int max = arr.size();
	int i, j, key;
	for (i = 1; i < max; i++) {
		key = arr[i];
		for (j = i - 1; j >= 0 && arr[j] > key; j--) {
			arr[j + 1] = arr[j];
		}
		arr[j+1] = key;
	}
}

//버블 정렬 함수
// 좌우 비교로 큰 값을 맨 끝에 놓자 !
void bubble(vector<int>& arr) {
	int max = arr.size();
	int i, j, key;
	for (i = 0; i < max - 1; i++) {
		for (j = 0; j < max - i -1; j++) {
			if (arr[j] > arr[j + 1]) {
				//swap 함수로 대체 가능
				//swap(arr[j],arr[j+1])
				key = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = key;
			}
		}
	}
}

int main() {
	int count;
	cin >> count;
	vector<int> n(count); // vector 생성 시 크기 할당
	for (int i = 0; i < count; i++) {
		cin >> n[i];
	}
	//sort(n.begin(), n.end()); // 정렬 알고리즘 사용
	//삽입 정렬 함수 사용
	//insert(n);
	//버블 정렬 함수 사용
	bubble(n);
	for (int x : n) {
		cout << x << '\n';
	}
}

