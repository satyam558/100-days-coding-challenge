#include <iostream>
#include <math.h>
using namespace std;

int Factorial(int number){
    if(number <= 1){
        return 1;
    }
      
    return number * Factorial(number-1);
}

int main() {
    string choice;
    cout << "Shall we start the program to find Fibonacci terms? (yes/no): ";
    cin >> choice;

    while (choice == "yes") {
        int number;
        cout<<"enter any number : ";
        cin>>number;
        cout<<"factorial of "<<number<<" is "<<Factorial(number)<<endl;
        
        cout << "Do you want to check another Fibonacci term? (yes/no): ";
        cin >> choice;
    }

    cout << "Program terminated. Goodbye!" << endl;
    return 0;
}