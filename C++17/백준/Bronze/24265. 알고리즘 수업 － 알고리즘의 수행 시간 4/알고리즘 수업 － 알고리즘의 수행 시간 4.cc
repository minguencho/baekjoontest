#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    
    cout << (n*n-n)/2 << endl; // 코드1 수행 횟수
    cout << 2 << endl; // 최고차항 차수
    return 0;
}