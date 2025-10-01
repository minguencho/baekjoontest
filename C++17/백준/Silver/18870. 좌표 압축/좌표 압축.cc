#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main() {
    int inputN;
    cin >> inputN;

    vector<int> arr;
    vector<int> uniqueArr;
    int input;

    for (int i = 0; i < inputN; i++) {
        cin >> input;
        arr.push_back(input);
        uniqueArr.push_back(input);
    }

    // 정렬 후 unique 처리
    sort(uniqueArr.begin(), uniqueArr.end());
    uniqueArr.erase(unique(uniqueArr.begin(), uniqueArr.end()), uniqueArr.end());

    // 값 -> 인덱스 매핑 테이블 생성
    unordered_map<int, int> indexMap;
    for (int i = 0; i < uniqueArr.size(); i++) {
        indexMap[uniqueArr[i]] = i;
    }

    // arr을 uniqueArr의 인덱스로 변환
    for (int& x : arr) {
        x = indexMap[x];
    }

    for (int& x : arr) cout << x << " ";

    return 0;
}
