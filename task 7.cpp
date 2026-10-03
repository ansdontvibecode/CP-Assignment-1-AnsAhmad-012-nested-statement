#include <iostream>
using namespace std;

int main() {
    int signal;

    cout << "1. Red\n";
    cout << "2. Yellow\n";
    cout << "3. Green\n";
    cout << "Enter signal number: ";
    cin >> signal;

    if (signal == 1) {
        cout << "Stop";
    } else {
        if (signal == 2) {
            cout << "Get Ready";
        } else {
            if (signal == 3)
                cout << "Go";
            else
                cout << "Invalid signal";
        }
    }

    return 0;
}
