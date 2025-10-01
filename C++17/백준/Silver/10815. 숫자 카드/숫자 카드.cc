#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    //상근 카드
    int inputN;
    cin >> inputN;

    unordered_set<int> set;
    
    int input;

    for (int i = 0; i < inputN; i++) {
        cin >> input;
        set.insert(input);
    }

    // 제시 카드
    int inputM;
    cin >> inputM;

    vector<int> comp_Arr;
    int input2;

    for (int i = 0; i < inputM; i++) {
        cin >> input2;
        comp_Arr.push_back(input2);
    }

    for (int i = 0; i < comp_Arr.size(); i++) {
        cout << (set.count(comp_Arr[i]) ? 1 : 0);
        if (i != comp_Arr.size() - 1) cout << " ";
    }
    
    return 0;
}