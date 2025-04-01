#include <iostream>
#include <math.h>
using namespace std;

int perSquare(int number){
    if(number >= 0){
        int sqrNumber = sqrt(number);
        return (sqrNumber*sqrNumber == number);
    }
    return false;
}

int main(){
    string choice;
    cout << "Shall we start the program to check strong numbers? (yes/no): ";
    cin>>choice;

    while(choice == "yes"){
        int number;
        cout<<"enter a number : ";
        cin>>number;
        
        if(perSquare(number)){
            cout<<"true"<<endl;
        }else{
            cout<<"false"<<endl;
        }

        cout << "Do you want to check another number? (yes/no): ";
        cin >> choice;
    }

    cout << "Program terminated. Goodbye!" << endl;
    return 0;
}