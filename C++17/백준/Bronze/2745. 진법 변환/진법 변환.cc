#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string N;
    int B;
    cin >> N >> B;

    int decimalValue = 0;
    int power = 0;

    for (int i = N.length() - 1; i >= 0; i--) {
        char digit = N[i];

        int numValue;
        if (digit >= '0' && digit <= '9') {
            numValue = digit - '0'; 
        }
        else {
            numValue = digit - 'A' + 10;  
        }

        decimalValue += numValue * pow(B, power); 
        power++;
    }

    cout << decimalValue << endl;
    return 0;
}
