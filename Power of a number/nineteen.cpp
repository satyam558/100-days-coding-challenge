#include <iostream>
using namespace std;

int calPowerNumber(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

int main() {
    string choice;
    cout << "Shall we start the program to calculate the power of a number? (yes/no): ";
    cin >> choice;

    while (choice == "yes") {
        int base, exponent;
        cout << "Enter base number: ";
        cin >> base;
        cout << "Enter exponent number: ";
        cin >> exponent;

        cout << "Result: " << calPowerNumber(base, exponent) << endl;

        cout << "Do you want to calculate another power? (yes/no): ";
        cin >> choice;
    }

    cout << "Program terminated. Goodbye!" << endl;
    return 0;
}