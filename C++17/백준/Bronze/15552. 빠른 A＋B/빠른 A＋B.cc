#include <iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(false);  // 빠른 입출력을 위해 sync 끄기
    cin.tie(NULL);  // cin과 cout의 동기화 끄기
    int a, b, c;
    cin >> a ;
    for (int i = 0; i < a; i++) {
        cin >> b >> c;
        cout << b+c << '\n';
    }
    return 0;
}