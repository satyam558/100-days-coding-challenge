#include<iostream>
using namespace std;
int main(){
    string choice;
    cout<<"shall we start the program? (yes/no) : ";
    cin>>choice;

    while(choice == "yes"){
       int year;
       cout<<"Enter a year : ";
       cin>>year;
       if(year%400==0){
        cout<<year<<" is an leap year"<<endl;
       }else if(year%4==0 && year%100!=0){
        cout<<year<<" is an leap year"<<endl;
       }else{
        cout<<year<<" is not an leap year"<<endl;
       }

       cout<<"you want to go another one? (yes/no) : ";
       cin>>choice;
    }
    cout<<"program terminated. GoodBye !"<<endl;
    return 0;
}