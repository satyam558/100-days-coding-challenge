#include <iostream>
#include <math.h>
using namespace std;

int getDecimal(long number){

    int i=0;
    int decimal =0;

    while(number != 0){
       int digit = number%10;
       decimal += digit * pow(8,i);
       number/=10;
       i++;
    }
    return decimal;

}

int main(){
    string choice;
    cout << "Shall we start the program of Octal to Decimal Conversion? (yes/no): ";
    cin>>choice;

    while(choice == "yes"){
        long octal;
        cout<<"Enter binary number : ";
        cin>>octal;
       
        cout<<"Conversion of Octal ("<<octal<<") to Decimal are "<<getDecimal(octal)<<endl;

       cout << "Do you want to check another number? (yes/no): ";
       cin >> choice;
    }

    cout << "Program terminated. Goodbye!" << endl;
    return 0;
}