#include <iostream>
#include <string>
using namespace std;

double grade_calculator(double credit, string grade) {
    if (grade == "A+") {
        return credit * 4.5;
    }
    else if (grade == "A0") {
        return credit * 4;
    }
    else if (grade == "B+") {
        return credit * 3.5;
    }
    else if (grade == "B0") {
        return credit * 3;
    }
    else if (grade == "C+") {
        return credit * 2.5;
    }
    else if (grade == "C0") {
        return credit * 2;
    }
    else if (grade == "D+") {
        return credit * 1.5;
    }
    else if (grade == "D0") {
        return credit * 1;
    }
    else if (grade == "F") {
        return credit * 0;
    }
}
int main() {
    double total_score = 0;
    double total_credit = 0;
    for (int i = 0; i < 20; i++)
    {
        string course_name, grade;
        double credit;
        cin >> course_name >> credit >> grade;
        if (grade != "P"){
            total_score += grade_calculator(credit, grade);
            total_credit += credit;
        }
    }
    cout << total_score / total_credit;
    return 0;
}
