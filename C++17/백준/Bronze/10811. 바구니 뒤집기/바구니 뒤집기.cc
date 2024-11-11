#include <iostream>
using namespace std;

int main() {
    int i, j;
    int n, m;
    cin >> n >> m;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = i+1;
    }
    for (int q = 0; q < m; q++)
    {
        cin >> i >> j;
        while (i < j) {
            int t = arr[i - 1];
            arr[i - 1] = arr[j - 1];
            arr[j - 1] = t;
            i++;
            j--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
