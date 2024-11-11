#include <iostream>
using namespace std;

int main() {
    int subjects;
    double score, max_score = 0, total = 0 ;
    cin >> subjects;
    double* arr = new double[subjects];

    for (int i = 0; i < subjects; i++)
    {
        cin >> score;
        arr[i] = score;
        if (score > max_score) {
            max_score = score;
        }
    }
    for (int i = 0; i < subjects; i++)
    {
        total = total + arr[i] / max_score * 100;
    }
    cout << total / subjects;
    return 0;
}
