#include <iostream>
using namespace std;

int main() {
    string choice;
    cout << "Shall we start the program to calculate the power of a number? (yes/no): ";
    cin >> choice;

    while (choice == "yes") {
        int number;
        cout << "Enter any number: ";
        cin >> number;

        cout<<"factor of "<<number<<" is : ";

        for(int i=1;i<=number;i++){
            if(number%i==0){
                cout<<i<<" ";
            }
        }
        cout<<endl;

        cout << "Do you want to calculate another power? (yes/no): ";
        cin >> choice;
    }

    cout << "Program terminated. Goodbye!" << endl;
    return 0;
}