#include <iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(false);  // 빠른 입출력을 위해 sync 끄기
    cin.tie(NULL);  // cin과 cout의 동기화 끄기
    int a,total = 0;
    cin >> a ;
    for (int i = 1; i < a+1; i++) {
        total += i;
    }
    cout << total << '\n';
    return 0;
}