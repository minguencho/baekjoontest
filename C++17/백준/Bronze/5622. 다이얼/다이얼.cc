#include <iostream>
#include <string>
using namespace std;

int timeCalculator(char input);

int main() {
    string input_str;
    int total_time = 0;
    getline(cin, input_str);

    for (int i = 0; i < input_str.length(); i++) {
        total_time += timeCalculator(input_str[i]);
    }
    
    cout << total_time;
    return 0;
}

int timeCalculator(char input) {
    if (input >= 'A' && input <= 'C') return 3;   // A, B, C -> 3초
    else if (input >= 'D' && input <= 'F') return 4;  // D, E, F -> 4초
    else if (input >= 'G' && input <= 'I') return 5;  // G, H, I -> 5초
    else if (input >= 'J' && input <= 'L') return 6;  // J, K, L -> 6초
    else if (input >= 'M' && input <= 'O') return 7;  // M, N, O -> 7초
    else if (input >= 'P' && input <= 'S') return 8;  // P, Q, R, S -> 8초
    else if (input >= 'T' && input <= 'V') return 9;  // T, U, V -> 9초
    else if (input >= 'W' && input <= 'Z') return 10; // W, X, Y, Z -> 10초
    else return 0; // 이 외의 문자는 0초
}
