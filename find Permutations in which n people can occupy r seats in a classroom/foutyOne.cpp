#include <iostream>
using namespace std;

int factorial(int number){
    if(number <= 1){
        return 1;
    }
     return number * factorial(number-1);
}

int main(){
    string choice;
    cout << "Shall we start the program to find Permutations in which n people can occupy r seats in a classroom? (yes/no): ";
    cin>>choice;

    while(choice == "yes"){
      int number1,number2;
      cout<<"Enter number of students : ";
      cin>>number1;
      cout<<"Enter number of seats : ";
      cin>>number2;

      int p = factorial(number1)/factorial(number1 - number2);

      cout<<"Total possible arrangements : "<<p<<endl;

       cout << "Do you want to check another number? (yes/no): ";
       cin >> choice;
    }

    cout << "Program terminated. Goodbye!" << endl;
    return 0;
}