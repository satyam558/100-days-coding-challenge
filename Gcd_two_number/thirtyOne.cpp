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
        int gcd=1;

        for(int i = 1;i<=number1 || i<=number2;i++){
            if(number1%i==0 && number2%i==0){
                gcd = i;
            }

        }
        
       cout<<"gcd OF "<<a<<" and "<<b<<" is "<<gcd<<endl;

       cout << "Do you want to check another number? (yes/no): ";
       cin >> choice;
    }

    cout << "Program terminated. Goodbye!" << endl;
    return 0;
}