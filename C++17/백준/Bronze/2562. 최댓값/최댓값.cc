#include <iostream>

using namespace std;
int main() {
    int *Numbers,N=9,X;
    Numbers = new int[N];
    for (int i = 0; i < N; i++)
    {
        cin >> Numbers[i];
    }
    int max = Numbers[0];
    int index_max=0;

    for (int i = 0; i < N; i++)
    {
        if (max < Numbers[i]) {
            max = Numbers[i];
        }
    }
    for (int i = 0; i < N; i++)
    {
        if (max ==  Numbers[i]) {
            index_max = i+1;
        }
    }
    cout << max << '\n' << index_max;
    delete[] Numbers;
    return 0;
}