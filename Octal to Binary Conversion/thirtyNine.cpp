#include <iostream>
#include <math.h>
using namespace std;

int main(){
    string choice;
    cout << "Shall we start the program of Octal to Binary Conversion? (yes/no): ";
    cin>>choice;

    while(choice == "yes"){
      //1. Octal to decimal
        int number;
        cout<<"Enter any Number : ";
        cin>>number;
        int digit = 0;
        int i = 0;
        int Octal = number;
        while(number > 0){
            int temp = number%10;
            digit += temp * pow(8,i);
            number/=10;
            i++;
        }

        cout<<"Octal ("<<Octal<<")"<<" decimal is "<<digit<<endl;
        
      //2. Decimal to Binary

        int decimalBinary[32];
        int j = 0;

        cout<<"Decimal ("<<digit<<")"<<" Binary is ";

        while(digit > 0){
            decimalBinary[j] = digit%2;
            digit/=2;
            j++;
        }

        for(int k = j - 1;k>=0;k--){
            cout<<decimalBinary[k]<<"";
        }

       cout<<endl;

       cout << "Do you want to check another number? (yes/no): ";
       cin >> choice;
    }

    cout << "Program terminated. Goodbye!" << endl;
    return 0;
}