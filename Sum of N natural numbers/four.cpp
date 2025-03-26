#include<iostream>
using namespace std;
int main(){
    string choice;
    cout<<"shall we start the program? (yes/no) : ";
    cin>>choice;

    while(choice == "yes"){
       int sum = 0;
       int i;
       int n;
       int number;
       cout << "Enter the number of values you want to sum: ";  
       cin>>number; 
       for( i = 1;i<=number;i++){
          cout<<"enter "<<i<<" number : ";
          cin>>n;
          sum+=n;
       }
       cout<<"sum of "<<number<<" natural number is "<<sum<<endl;
       cout<<"you want to go another one? (yes/no) : ";
       cin>>choice;
    }
    cout<<"program terminated. GoodBye !"<<endl;
    return 0;
}