#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false; // 1 and below are not prime
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    vector<int> PrimeNumbers;
    int Min = 0;
    int Max = 0;
    cin >> Min >> Max;
    for (int i = Min; i <= Max; i++)
    {
        if (isPrime(i)) {
            PrimeNumbers.push_back(i);
        }
    }
    if (!PrimeNumbers.empty()) {
        int sum = 0;
        for (int i = 0; i < PrimeNumbers.size(); i++)
        {
            sum += PrimeNumbers[i];
        }
        cout << sum << "\n";
        cout << PrimeNumbers[0];
    }
    else {
        cout << -1;
    }
    return 0;
}

