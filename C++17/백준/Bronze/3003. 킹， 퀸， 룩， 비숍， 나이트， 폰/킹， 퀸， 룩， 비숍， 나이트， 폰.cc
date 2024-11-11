#include <iostream>
using namespace std;

int main() {
    int correct_chess[6] = { 1, 1, 2, 2, 2, 8 };
    for (int i = 0; i < 6; i++) {
        int input_number;
        cin >> input_number;
        cout << correct_chess[i] - input_number << " ";
    }
}
