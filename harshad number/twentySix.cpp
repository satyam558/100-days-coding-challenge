#include <iostream>
#include <math.h>
using namespace std;

int main(){
    string choice;
    cout << "Shall we start the program to check Harshad numbers? (yes/no): ";
    cin>>choice;

    while(choice == "yes"){
        int number;
        cout<<"enter a number : ";
        cin>>number;
        
        int temp = number;
        int digit;
        int sum = 0;

        while(temp!=0){
            digit = temp%10;
            sum= sum + digit;
            temp/=10;
        }

        cout<<"sum of number is "<<sum<<endl;

        if(number % sum == 0){
            cout<<number<<" is divisible by "<<sum<<" so it is a harshad number"<<endl;
        }else{
            cout<<number<<" is not divisible by "<<sum<<" so it is not a harshad number"<<endl;
        }

        cout << "Do you want to check another number? (yes/no): ";
        cin >> choice;
    }

    cout << "Program terminated. Goodbye!" << endl;
    return 0;
}