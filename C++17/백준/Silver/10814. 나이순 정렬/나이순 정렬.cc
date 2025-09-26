#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int inputN;
    cin >> inputN;

    vector<pair<int, string>> arr(inputN);
    for (int i = 0; i < inputN; i++) {
        cin >> arr[i].first >> arr[i].second;
    }
    //stable_sort는 같은 값끼리는 순서 유지함.
    stable_sort(arr.begin(), arr.end(), [](auto &a, auto &b){
        return a.first < b.first;
     });

    for (auto& x : arr) {
        cout << x.first << " " << x.second << '\n';
    }
        return 0;
}