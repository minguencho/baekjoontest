#include <iostream>
#include <cmath>
using namespace std;

void factorize(int n) {
    if (n == 1) return; // 1인 경우 아무 것도 출력하지 않음

    for (int i = 2; i <= sqrt(n); i++) { // 2부터 sqrt(n)까지 나눠봄
        while (n % i == 0) { // i가 n의 소인수인 동안 계속 나누기
            cout << i << "\n";
            n /= i;
        }
    }
    if (n > 1) { // n이 소수로 남은 경우 출력
        cout << n << "\n";
    }
}

int main() {
    int N;
    cin >> N;
    factorize(N);
    return 0;
}
