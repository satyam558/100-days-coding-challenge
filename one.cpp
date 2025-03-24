#include<iostream>
using namespace std;
int main(){
    string choice;
    cout<<"Shall we start our program to check the numbers? (yes/no): ";
    cin>>choice;
    while(choice == "yes"){
        int number;
        cout<<"Enter any number : ";
        cin>>number;
    
        if(number > 0){
            cout<<"number is positive"<<endl;
        }else if(number < 0){
            cout<<"number is negative"<<endl;
        }else{
            cout<<"number is zero"<<endl;
        }
        cout<<"Are you sure to check another number? (yes/no): ";
        cin>>choice;
    }
    cout << "Program terminated. Goodbye!" << endl;
    return 0;
}