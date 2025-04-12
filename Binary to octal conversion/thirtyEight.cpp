#include <iostream>
#include <math.h>
using namespace std;

int main(){
    string choice;
    cout << "Shall we start the program of Binary to Octal Conversion? (yes/no): ";
    cin>>choice;

    while(choice == "yes"){
      //1. binary to decimal
        int number;
        cout<<"Enter any Number : ";
        cin>>number;
        int digit = 0;
        int i = 0;
        int binary = number;
        while(number > 0){
            int temp = number%10;
            digit += temp * pow(2,i);
            number/=10;
            i++;
        }

        cout<<"binary ("<<binary<<")"<<" decimal is "<<digit<<endl;
        
      //2. Decimal to Octal

        int decimalOctal[32];
        int j = 0;

        cout<<"Decimal ("<<digit<<")"<<" Octal is ";

        while(digit > 0){
            decimalOctal[j] = digit%8;
            digit/=8;
            j++;
        }

        for(int k = j - 1;k>=0;k--){
            cout<<decimalOctal[k]<<"";
        }

       cout<<endl;

       cout << "Do you want to check another number? (yes/no): ";
       cin >> choice;
    }

    cout << "Program terminated. Goodbye!" << endl;
    return 0;
}