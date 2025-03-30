#include <iostream>
#include <math.h>
using namespace std;

int main() {
    string choice;
    cout << "Shall we start the program to find Fibonacci terms? (yes/no): ";
    cin >> choice;

    while (choice == "yes") {
        int num;
        cout << "Enter the position of the Fibonacci term you want to calculate (e.g., 5 for the 5th term): ";
        cin >> num;

        int a = 0, b = 1;
        int nexTerm;

        if (num == 1) {
            cout << "The 1st Fibonacci term is: " << a << endl;
        } else if (num == 2) {
            cout << "The 2nd Fibonacci term is: " << b << endl;
        } else {
            for (int i = 2; i < num; i++) {
                nexTerm = a + b;
                a = b;
                b = nexTerm;
            }
            cout << "The " << num << "th Fibonacci term is: " << nexTerm << endl;
        }

        cout << "Do you want to check another Fibonacci term? (yes/no): ";
        cin >> choice;
    }

    cout << "Program terminated. Goodbye!" << endl;
    return 0;
}