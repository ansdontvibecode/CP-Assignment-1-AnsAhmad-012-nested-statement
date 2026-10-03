#include <iostream>
using namespace std;

int main() {
    double weight;

    cout << "Enter baggage weight in kg: ";
    cin >> weight;

    if (weight <= 20) {
        cout << "Baggage accepted without extra charge.";
    } else {
        if (weight <= 30)
            cout << "Extra baggage charge applies.";
        else
            cout << "Baggage is too heavy.";
    }

    return 0;
}
