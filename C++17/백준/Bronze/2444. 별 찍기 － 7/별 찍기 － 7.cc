#include <iostream>
using namespace std;

int main() {
    int inputN;
    cin >> inputN;

    for (int i = 1; i < inputN * 2; i++) {
        // 공백과 별 개수 계산
        int stars = (i <= inputN) ? (2 * i - 1) : (2 * (2 * inputN - i) - 1);
        int spaces = (i <= inputN) ? (inputN - i) : (i - inputN);

        // 공백 출력
        for (int j = 0; j < spaces; j++) {
            cout << " ";
        }

        // 별 출력
        for (int j = 0; j < stars; j++) {
            cout << "*";
        }

        cout << endl;
    }
    return 0;
}
