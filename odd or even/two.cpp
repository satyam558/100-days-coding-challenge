#include<iostream>
using namespace std;
int main(){
    string choice;
    cout<<"shall we start our program : ";
    cin>>choice;

    while(choice == "yes"){
      int number;
      cout<<"Enter a number : ";
      cin>>number;
  
      if(number%2==0){
          cout<<"it is an even number"<<endl;
      }else{
          cout<<"it is an odd number"<<endl;
      }

      cout<<"you want to check another number? (yes/no) : ";
      cin>>choice;
    }
    cout << "Program terminated. Goodbye!" << endl;
    return 0;
}