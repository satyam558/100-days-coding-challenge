#include<iostream>
using namespace std;
int main(){
    string choice;
    cout<<"shall we start the program? (yes/no) : ";
    cin>>choice;

    while(choice == "yes"){
       int sum = 0;
       int n;
       cout<<"Enter any number : ";
       cin>>n;   
       for(int i=1 ;i<=n;i++){
          sum+=i;
       }
       cout<<"sum of first "<<n<<" natural number is "<<sum<<endl;
       cout<<"you want to go another one : ";
       cin>>choice;
    }
    cout<<"program terminated. GoodBye !"<<endl;
    return 0;
}