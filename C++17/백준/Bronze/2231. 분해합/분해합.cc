#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int result = 0;

    // 생성자는 N보다 작거나 같은 수 중에서 탐색
    for (int i = 1; i < N; ++i) {
        int sum = i;
        int temp = i;

        // 각 자리수 더하기
        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }

        // 분해합이 N이면 이게 생성자
        if (sum == N) {
            result = i;
            break;  // 가장 작은 생성자 찾았으므로 종료
        }
    }

    cout << result << endl;
    return 0;
}
