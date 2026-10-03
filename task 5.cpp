#include <iostream>
using namespace std;

int main() {
    int marks;
    int age;

    cout << "Enter marks: ";
    cin >> marks;

    cout << "Enter age: ";
    cin >> age;

    if (marks >= 70) {
        if (age >= 16)
            cout << "Student is eligible for admission.";
        else
            cout << "Student is too young.";
    } else {
        cout << "Marks are not sufficient.";
    }

    return 0;
}
