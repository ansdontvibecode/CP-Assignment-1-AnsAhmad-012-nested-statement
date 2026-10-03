#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (n >= 0) {
        if (n % 2 == 0)
            cout << "Positive Even number";
        else
            cout << "Positive Odd number";
    } else {
        if (n % 2 == 0)
            cout << "Negative Even number";
        else
            cout << "Negative Odd number";
    }

    return 0;
}
