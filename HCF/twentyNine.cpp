#include <iostream>
#include <math.h>
using namespace std;

int main(){
    string choice;
    cout << "Shall we start the program of HCF/GCD? (yes/no): ";
    cin>>choice;

    while(choice == "yes"){
        int number1,number2;
        cout<<"enter 1st number : ";
        cin>>number1;
        cout<<"enter 2nd number : ";
        cin>>number2;

        int a = number1; int b = number2;

        while(number1 != number2){
            if(number1 > number2){
                number1 -= number2;
            }else{
                number2 -= number1;
            }
        }
        
       cout<<"HCF OF "<<a<<" and "<<b<<" is "<<number1<<endl;

       cout << "Do you want to check another number? (yes/no): ";
       cin >> choice;
    }

    cout << "Program terminated. Goodbye!" << endl;
    return 0;
}