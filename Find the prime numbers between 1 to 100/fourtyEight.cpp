#include<iostream>
#include<math.h>
using namespace std;

int checkPrime(int num){
    if(num<=1){
        return false;
    }

    for(int i = 2; i<=sqrt(num);i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    string choice;
    cout << "Shall we start the program to Find the Prime number between 1 o 100? (yes/no): ";
    cin>>choice;
    
    while(choice == "yes"){
       int number = 100;
       for(int i = 2;i<=number;i++){
        if(checkPrime(i)){
            cout<<i<<" ";
        }
       }
       cout<<endl;

       cout << "Do you want to check another number? (yes/no): ";
       cin >> choice;
    }
  
}

/*
  flow of the code :-
   *first we create one function for checkPrime where suppose we pass number 2 so they will check first 2(num)<=1 so its not..
   * now we go in loop where i = 2 and 2<=sqrt(2)(= is most importand if you are dealing with sqrt)
   so if we found 2 sqrt so it's less than two so the loop will not run and it return true means number is prime..
   *now in main function we created one loop where they will run till 100 so first we pass i=2 they will check 
   that it's prime or not using checkPrime function if it is prime than it will print i.. than it goo to i=3 ,then 4,5 to 100.
   *we are using sqrt in checkPrime because we know that 25 sqrt is 5 if it is divisible by i = 5 means it's prime...
   *lets suppose we are taking 11 number and there squareroot is between 3 to 4 so the (11 is check first 2 that it is divisible 
   by or not so it's not,then 11 is check 3 that it is divisible by or not so it's not,and last 11 is check 4(may be) that it is divisible 
   by or not so it's not....means they return true it means 11 is prime.
   )  
*/