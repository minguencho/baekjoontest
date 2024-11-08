#include <iostream>

using namespace std;
int main() {
    int n,*Numbers, v, count=0;
    cin >> n;
    Numbers = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> Numbers[i];
    }
    cin >> v;
    for (int i = 0; i < n; i++)
    {
        if (Numbers[i] == v) {
            count++;
        }
    }
    cout << count;
    delete[] Numbers;
    return 0;
}