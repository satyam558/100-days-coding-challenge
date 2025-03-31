#include <iostream>
using namespace std;

int factorial(int n) {
    if(n<=1){
        return 1;
    }

    return n * factorial(n-1);  
}

int main() {
    string choice;
    cout << "Shall we start the program to check strong numbers? (yes/no): ";
    cin >> choice;

    while (choice == "yes") {
        int number;
        cout<<"enter a number : ";
        cin>>number;
        int temp = number;
        int digit;
        int result=0;

        while(temp!=0){
           digit = temp%10;
           result = result+factorial(digit);
           temp/=10;
        }

        if(result == number){
            cout<<number<<" and "<<result<<" is same so it's a strong number "<<endl;
        }else{
            cout<<number<<" and "<<result<<" is not same so it's not a strong number "<<endl;
        }

        cout << "Do you want to check another number? (yes/no): ";
        cin >> choice;
    }

    cout << "Program terminated. Goodbye!" << endl;
    return 0;
}