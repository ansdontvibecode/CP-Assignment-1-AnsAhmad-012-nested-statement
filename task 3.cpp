#include <iostream>
using namespace std;

int main() {
    int marks;

    cout << "Enter marks: ";
    cin >> marks;

    if (marks >= 50) {
        if (marks >= 80)
            cout << "Grade A";
        else
            cout << "Grade B";
    } else {
        if (marks >= 40)
            cout << "Grade C";
        else
            cout << "Fail";
    }

    return 0;
}