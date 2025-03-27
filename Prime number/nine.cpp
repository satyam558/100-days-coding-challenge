#include<iostream>
using namespace std;
int main(){
    string choice;
    cout<<"shall we start the program? (yes/no) : ";
    cin>>choice;

    while(choice == "yes"){
       int number;
       cout<<"Enter a number : ";
       cin>>number;
       int count = 0;
       for(int i = 1; i<=number;i++){
        if(number%i==0){
            count++;
        }
       }

       if(count == 2){
        cout<<number<<" is a prime number"<<endl;
       }else{
        cout<<number<<" is not a prime number"<<endl;
       }

       cout<<"you want to go another one? (yes/no) : ";
       cin>>choice;
    }
    cout<<"program terminated. GoodBye !"<<endl;
    return 0;
}