#include <iostream>
using namespace std;

int main() {
    string choice;
    cout << "Shall we start the program? (yes/no): ";
    cin >> choice;

    while (choice == "yes") {
        int num1;
        int digit;
        int rev = 0;
        cout<<"enter a number : ";
        cin>>num1;
        int temp = num1;

        while(temp != 0){
            digit = temp%10;
            rev = rev*10 + digit;
            temp/=10;
        }

        if(num1 == rev){
            cout<<num1<<" and "<<rev<<" is same so it's an palindrome number"<<endl;
        }else{
            cout<<num1<<" and "<<rev<<" is not same so it's not an palindrome number"<<endl;
        }

        cout << "Do you want to check another range? (yes/no): ";
        cin >> choice;
    }

    cout << "Program terminated. Goodbye!" << endl;
    return 0;
}