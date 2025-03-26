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
       int num3;
       cout<<"enter third number : ";
       cin>>num3;
       if(num1 > num2 && num1 > num3){
        cout<<num1<<" is greater than "<<num2<<" or "<<num3<<endl;
       }else if(num2 > num1 && num2 > num3){
        cout<<num2<<" is greater than "<<num1<<" or "<<num3<<endl;
       }else{
        cout<<num3<<" is greater than "<<num1<<" or "<<num2<<endl;
       }

       cout<<"you want to go another one? (yes/no) : ";
       cin>>choice;
    }
    cout<<"program terminated. GoodBye !"<<endl;
    return 0;
}