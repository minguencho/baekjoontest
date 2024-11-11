#include <iostream>
#include <string>
using namespace std;

string reverseSTR(string input);

int main() {
    string A, B;
    cin >> A >> B;
    A = reverseSTR(A);
    B = reverseSTR(B);

    if (stoi(A) > stoi(B)) {
        cout << A;
    }
    else {
        cout << B;
    }

    return 0;
}

string reverseSTR(string input) {
    string output = input;
    int length = input.length();
    for (int i = 0; i < length; ++i) {
        output[i] = input[length - 1 - i];
    }
    return output;
}
