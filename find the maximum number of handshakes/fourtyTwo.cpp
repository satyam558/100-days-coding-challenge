#include <iostream>
using namespace std;

int handShakes(int number){
    if(number <= 1){
        return 1;
    }
     return number + handShakes(number-1);
}

int main(){
    string choice;
    cout << "Shall we start the program to find the maximum number of handshakes? (yes/no): ";
    cin>>choice;

    while(choice == "yes"){
      int number1;
      cout<<"Enter number of students : ";
      cin>>number1;
     
      cout<<"For "<<number1<<" people there will "<<handShakes(number1)-number1<<" handshakes"<<endl;

    /*  second way 
         int num = 9;

         int total = num * (num-1) / 2; // Combination nC2
    */

       cout << "Do you want to check another number? (yes/no): ";
       cin >> choice;
    }

    cout << "Program terminated. Goodbye!" << endl;
    return 0;
}