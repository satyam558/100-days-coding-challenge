#include <iostream>
#include <math.h>
using namespace std;

int getDecimal(long number){

    int i=0;
    int decimal =0;

    while(number != 0){
       int digit = number%10;
       decimal += digit * pow(2,i);
       number/=10;
       i++;
    }
    return decimal;

}

int main(){
    string choice;
    cout << "Shall we start the program of HCF/GCD? (yes/no): ";
    cin>>choice;

    while(choice == "yes"){
        long binary;
        cout<<"Enter binary number : ";
        cin>>binary;
       
        cout<<"Conversion of Binary ("<<binary<<") to Decimal are "<<getDecimal(binary)<<endl;

       cout << "Do you want to check another number? (yes/no): ";
       cin >> choice;
    }

    cout << "Program terminated. Goodbye!" << endl;
    return 0;
}