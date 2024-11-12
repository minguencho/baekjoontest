#include <iostream>
#include <string>
using namespace std;

int main() {
    int inputN, groupN = 0;
    cin >> inputN;

    for (int i = 0; i < inputN; i++) {
        string input;
        cin >> input;
        bool seq_words[26] = { false };
        bool group = true;
        seq_words[input[0] - 'a'] = true;

        for (int j = 1; j < input.length(); j++) {
            char now_word = input[j];
            int index = now_word - 'a';
            if (seq_words[index] && input[j - 1] != now_word) {
                group = false;
                break;
            }
            seq_words[index] = true;
        }
        if (group) {
            groupN++;
        }
    }

    cout << groupN;
    return 0;
}
