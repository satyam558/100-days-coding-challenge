#include<iostream>
using namespace std;
int main(){
    string choice;
    cout << "Shall we start the program to Calculate the number of digits in an integer? (yes/no): ";
    cin>>choice;

    while(choice == "yes"){
        int number;
        cout<<"Enter any number : ";
        cin>>number;

        int temp = number,count = 0;
        while(number != 0){
           number/=10;
           count++;
        }

        cout<<temp<<" of digits in an integer is "<<count<<endl;
      
       cout << "Do you want to check another number? (yes/no): ";
       cin >> choice;
    }
}