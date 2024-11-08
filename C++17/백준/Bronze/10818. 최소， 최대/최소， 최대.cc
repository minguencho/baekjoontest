#include <iostream>

using namespace std;
int main() {
    int *Numbers, N,X;
    cin >> N;
    Numbers = new int[N];
    for (int i = 0; i < N; i++)
    {
        cin >> Numbers[i];
    }
    int max = Numbers[0];
    int min =  Numbers[0];

    for (int i = 0; i < N; i++)
    {
        if (max > Numbers[i]) {
            max = Numbers[i];
        }
        if (min < Numbers[i]) {
            min = Numbers[i];
        }
    }
    cout << max << " " << min;
    delete[] Numbers;
    return 0;
}