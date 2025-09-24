#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    const int MAX = 10000;
    //정수 배열 -> 매핑 테이블과 같이 사용 1이 2번 입력되면 count[1]에 2가 매핑됨
    int count[MAX + 1] = { 0 };

    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        count[x]++;
    }

    for (int i = 1; i <= MAX; i++) {
        while (count[i]--) {
            cout << i << '\n';
        }
    }

    return 0;
}