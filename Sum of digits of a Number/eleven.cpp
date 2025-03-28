#include <iostream>
using namespace std;

int main() {
    string choice;
    cout << "Shall we start the program? (yes/no): ";
    cin >> choice;

    while (choice == "yes") {
        int num1;
        int digit;
        int sum = 0;
        cout<<"enter a number : ";
        cin>>num1;
        int temp = num1;

        while(temp != 0){
            digit = temp%10;
            sum+=digit;
            temp/=10;
        }

        cout<<"sum of "<<num1<<" is "<<sum<<endl;
        

        cout << "Do you want to check another range? (yes/no): ";
        cin >> choice;
    }

    cout << "Program terminated. Goodbye!" << endl;
    return 0;
}