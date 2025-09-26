#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int inputN;
    cin >> inputN;

    vector<string> arr;
    string input;
    for (int i = 0; i < inputN; i++) {
        cin >> input;
        arr.push_back(input);
    }
    sort(arr.begin(), arr.end(), [](const string& a, const string& b) {
        if (a.size() == b.size()) {
            return a < b;
        }
        return a.size() < b.size();
        });

    // 중복 제거
    arr.erase(unique(arr.begin(), arr.end()), arr.end());
    for (auto& s : arr) cout << s << "\n";

    return 0;
}