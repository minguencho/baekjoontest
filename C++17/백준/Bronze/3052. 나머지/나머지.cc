#include <iostream>
using namespace std;

int main() {
    int remainders[42] = { 0 }; // 나머지 값을 인덱스로, 각 나머지가 존재하는지 표시
    int count = 0; // 서로 다른 나머지 개수

    for (int i = 0; i < 10; i++) {
        int number;
        cin >> number;
        int remainder = number % 42;

        if (remainders[remainder] == 0) { // 새로운 나머지 값인 경우
            remainders[remainder] = 1;
            count++;
        }
    }

    cout << count << endl; // 서로 다른 나머지의 개수 출력
    return 0;
}
