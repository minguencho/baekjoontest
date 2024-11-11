#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    getline(cin, input);
    int isPalindrome = 1;

    int start = 0;
    int end = input.length() - 1;

    while (start < end) {
        if (input[start] != input[end]) {
            isPalindrome = 0;
            break;
        }
        start++;
        end--;
    }
    cout << isPalindrome;
    return 0;
}
