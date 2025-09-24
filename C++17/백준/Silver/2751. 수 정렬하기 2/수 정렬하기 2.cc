#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void merge(vector<int>& arr, int left, int mid, int right) {
	int n1 = mid - left + 1; // 왼쪽 부분 크기
	int n2 = right - mid;    // 오른쪽 부분 크기

	vector<int> L(n1);
	vector<int> R(n2);

	for (int i = 0; i < n1; i++) L[i] = arr[left + i];
	for (int i = 0; i < n2; i++) R[i] = arr[mid + 1 + i];

	int i = 0, j = 0, k = left;

	//두 배열 비교하며 합치기
	while (i < n1 && j < n2) {
		if (L[i] <= R[j]) arr[k++] = L[i++];
		else arr[k++] = R[j++];
	}

	//비교하고 남은 것들은 그대로 삽입해도 됨
	while (i < n1)arr[k++] = L[i++];
	while (j < n2)arr[k++] = R[j++];
}

void mergesort(vector<int>& arr, int left, int right) {
	if (left >= right) return;
	int mid = left + (right - left) / 2;
	mergesort(arr, left, mid); // 왼 정렬
	mergesort(arr, mid+1, right); // 오른 정렬
	merge(arr, left, mid, right); // 합병
}

void heapify(vector<int>& arr, int n, int i) {
	// 단일 트리의 루트를 최대 값으로 만든다
	int largest = i; //root
	int left = 2 * i + 1;
	int right = 2 * i + 2;

	if (left < n && arr[left] > arr[largest])
		largest = left;

	if (right < n && arr[right] > arr[largest])
		largest = right;
	// 단일 루트의 변화가 생긴다면 자식 트리를 검사한다
	if (largest != i) {
		swap(arr[i], arr[largest]);
		heapify(arr, n, largest);
	}
}

void heapsort(vector<int>& arr) {
	int max = arr.size();
	
	// 배열을 최대 힙으로 변환
	for (int i = max / 2 - 1; i >= 0; i--) {
		heapify(arr, max, i);
	}
	// 힙에서 원소 하나씩 꺼내서 정렬
	for (int i = max - 1; i > 0; i--) {
		swap(arr[0], arr[i]);
		heapify(arr, i, 0);
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
	// 병합 정렬 사용
	// 분할 - 정복 기법 사용
	//mergesort(n, 0 ,count-1);
	// 힙 정렬 사용
	heapsort(n);
	for (int x : n) {
		cout << x << '\n';
	}
}
