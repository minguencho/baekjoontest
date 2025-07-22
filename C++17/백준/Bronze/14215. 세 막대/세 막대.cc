#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a[3];
    cin >> a[0] >> a[1] >> a[2];

    sort(a, a + 3); // 정렬: a[0] <= a[1] <= a[2]

    if (a[0] + a[1] <= a[2]) {
        // 가장 긴 막대를 다른 두 변의 합 - 1로 줄임
        a[2] = a[0] + a[1] - 1;
    }

    int perimeter = a[0] + a[1] + a[2];
    cout << perimeter << endl;

    return 0;
}