#include <iostream>
#include <string>
using namespace std;

int main() {
	string input;
	char output = ' ';
	getline(cin, input);
	int freq[26] = {0};

	for (int i = 0; i < input.length(); i++)
	{
		input[i] = toupper(input[i]);
		freq[input[i] - 'A']++;
	}
	int max_count = 0;
	char max_char = '?';
	bool duplicate = false;
	
	for (int i = 0; i < 26; i++)
	{
		if (freq[i] > max_count) {
			max_count = freq[i];
			max_char = 'A' + i;
			duplicate = false;
		}
		else if(freq[i] == max_count) {
			duplicate = true;
		}
	}
	if (duplicate) {
		cout << '?';
	}
	else {
		cout << max_char;
	}
	cout << output;
	
	return 0;
}
