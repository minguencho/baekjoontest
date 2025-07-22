#include <iostream>
using namespace std;

int main() {
    int a1, a0, c, n0;
    cin >> a1 >> a0 >> c >> n0;

    bool valid = true;
    for (int n = n0; n <= 100; n++) {
        if (a1 * n + a0 > c * n) {
            valid = false;
            break;
        }
    }

    cout << (valid ? 1 : 0);
    return 0;
}