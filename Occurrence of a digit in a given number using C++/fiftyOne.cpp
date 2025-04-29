#include<iostream>
using namespace std;
int main(){
    string choice;
    cout << "Shall we start the program to Occurrence of a digit in a given number using C++? (yes/no): ";
    cin>>choice;

    while(choice == "yes"){
       int number;
       cout<<"Enter a Number : ";
       cin>>number;
       int d;
       cout<<"Enter a Digit : ";
       cin>>d;
       int count = 0;

       while(number){
        int rem = number%10;
        if(rem == d){
            count++;
        }
        number/=10;
       }

      cout<<"Occurrence of a digit in a given number is "<<count<<endl;
        
       cout << "Do you want to check another number? (yes/no): ";
       cin >> choice;
    }
}