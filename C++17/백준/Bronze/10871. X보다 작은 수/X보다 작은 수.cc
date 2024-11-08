#include <iostream>

using namespace std;
int main() {
    int *Numbers, N,X;
    cin >> N >> X;
    Numbers = new int[N];
    for (int i = 0; i < N; i++)
    {
        cin >> Numbers[i];
    }
    for (int i = 0; i < N; i++)
    {
        if (Numbers[i] < X) {
            cout << Numbers[i] << " ";
        }
    }
    delete[] Numbers;
    return 0;
}