#include <iostream>
using namespace std;

int main() {
    int A, B;
    while (cin >> A >> B) {  // EOF 처리: cin이 더 이상 입력을 받지 않을 때 종료
        cout << A + B << '\n';  // A + B를 출력
    }
    return 0;
}