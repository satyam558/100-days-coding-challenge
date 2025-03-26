#include<iostream>
using namespace std;
int main(){
    string choice;
    cout<<"shall we start the program? (yes/no) : ";
    cin>>choice;

    while(choice == "yes"){
       int num1;
       cout<<"enter first number : ";
       cin>>num1;
       int num2;
       cout<<"enter second number : ";
       cin>>num2;
       if(num1 > num2){
        cout<<num1<<" is greater than "<<num2<<endl;
       }else{
        cout<<num2<<" is greater than "<<num1<<endl;
       }

       cout<<"you want to go another one? (yes/no) : ";
       cin>>choice;
    }
    cout<<"program terminated. GoodBye !"<<endl;
    return 0;
}