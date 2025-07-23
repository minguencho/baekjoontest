#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> cards(n);
    for (int l = 0; l < n; l++) {
        cin >> cards[l];
    }
    int maxsum = 0;
    for (int i = 0; i < n - 2; i++) {
        for (int j=i+1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                int sum = cards[i] + cards[j] + cards[k];
                if (sum <= m && sum > maxsum) {
                    maxsum = sum;
                }
            }
        }
    }
    cout << maxsum << endl;

    return 0;
}