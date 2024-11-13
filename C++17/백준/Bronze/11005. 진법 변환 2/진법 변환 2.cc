#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    int N, B;
    cin >> N >> B;
    string output;
    while (N>0) {
        int remainder = N % B;
        // 나머지가 10보다 크면 영문 처리
        if (remainder >= 10) {
            output = char(remainder - 10 + 'A') + output;
        }
        else {
            output = char(remainder + '0') + output;
        }
        N /= B;
    }
    cout << output;
    return 0;
}
