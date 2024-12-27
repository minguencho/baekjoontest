#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    while (true) {
        int a, b, c;
        cin >> a >> b >> c;

        // 종료 조건
        if (a == 0 && b == 0 && c == 0) break;

        // 세 변을 오름차순 정렬
        int sides[3] = { a, b, c };
        sort(sides, sides + 3);

        // 삼각형 조건 검사
        if (sides[0] + sides[1] <= sides[2]) {
            cout << "Invalid" << endl; // 삼각형 조건 불만족
        }
        else if (sides[0] == sides[1] && sides[1] == sides[2]) {
            cout << "Equilateral" << endl; // 세 변이 모두 같은 경우
        }
        else if (sides[0] == sides[1] || sides[1] == sides[2]) {
            cout << "Isosceles" << endl; // 두 변이 같은 경우
        }
        else {
            cout << "Scalene" << endl; // 세 변이 모두 다른 경우
        }
    }

    return 0;
}