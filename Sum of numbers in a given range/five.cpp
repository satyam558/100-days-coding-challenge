#include<iostream>
using namespace std;
int main(){
    string choice;
    cout<<"shall we start the program? (yes/no) : ";
    cin>>choice;

    while(choice == "yes"){
       int sum = 0;
       int i;

       cout<<"Enter first number : ";
       cin>>i;
       int temp = i;
       int n;
       cout<<"Enter second number : ";
       cin>>n;   
       for( i;i<=n;i++){
          sum+=i;
       }
       cout<<"sum of "<<temp<<" and "<<n<<" is "<<sum<<endl;
       cout<<"you want to go another one? (yes/no) : ";
       cin>>choice;
    }
    cout<<"program terminated. GoodBye !"<<endl;
    return 0;
}