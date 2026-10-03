#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18) {
        if (age <= 70)
            cout << "You can apply for a driving license.";
        else
            cout << "Age is above the allowed limit.";
    } else {
        cout << "You are too young.";
    }

    return 0;
}
