#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string input;
    cin >> input;
    vector<int> arr(input.size());
    for (int i = 0; i < input.size(); i++) {
        arr[i] = input[i]-'0';
    }
    sort(arr.begin(), arr.end());

    for (int i = arr.size()-1 ; i >= 0; i--) {
        cout << arr[i];
    }

    return 0;
}
