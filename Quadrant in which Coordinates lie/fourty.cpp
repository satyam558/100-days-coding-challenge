#include <iostream>
using namespace std;

int main(){
    string choice;
    cout << "Shall we start the program of Quadrant in  which coordinates lie? (yes/no): ";
    cin>>choice;

    while(choice == "yes"){
      int number1,number2;
      cout<<"Enter First number : ";
      cin>>number1;
      cout<<"Enter Second number : ";
      cin>>number2;

      if(number1 > 0 && number2 > 0){
        cout << "point " << number1 << ", " << number2 << " lies in the First quadrant\n";
      }else if(number1 < 0 && number2 > 0){
        cout << "point " << number1 << ", " << number2 << " lies in the Second quadrant\n";
      }else if(number1 < 0 && number2 < 0){
        cout << "point " << number1 << ", " << number2 << " lies in the Third quadrant\n";
      }else if(number1 > 0 && number2 < 0){
        cout << "point " << number1 << ", " << number2 << " lies in the Fourth quadrant\n";
      }else if(number1 == 0 && number2 == 0){
        cout << "point " << number1 << ", " << number2 << " on Origin\n";
      }else if(number1 != 0 && number2 == 0){
        cout << "point " << number1 << ", " << number2 << " on x-axis\n";
      }else if(number1 == 0 && number2 != 0){
        cout << "point " << number1 << ", " << number2 << " at y-axis\n";
      }

       cout << "Do you want to check another number? (yes/no): ";
       cin >> choice;
    }

    cout << "Program terminated. Goodbye!" << endl;
    return 0;
}