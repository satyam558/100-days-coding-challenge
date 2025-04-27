#include<iostream>
using namespace std;
int main(){
    string choice;
    cout << "Shall we start the program to count the number of days in a given month of a year? (yes/no): ";
    cin>>choice;

    while(choice == "yes"){
        int month,year;
        cout<<"Enter a month : ";
        cin>>month;
        cout<<"Enter a year : ";
        cin>>year;

        if((month == 2) && ((year%400==0) || ((year%4==0) && (year%100!=0)))){
            cout<<"Number of days is 29"<<endl;
        }else if(month == 2 ){
            cout<<"Number of days is 28"<<endl;
        }else if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
            cout<<"Number of days is 31"<<endl;
        }else if(month == 4 || month == 6 || month == 9 || month == 11){
            cout<<"Number of days is 30"<<endl;
        }else{
            cout<<"Invalid Month or year"<<endl;
        }
        
       cout << "Do you want to check another number? (yes/no): ";
       cin >> choice;
    }
}