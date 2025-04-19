#include <iostream>
using namespace std;

int isPrime(int num){
    if(num < 2){
        return false;
    }

    /*1. i*i<=num  .
         first of all a number suppose 25  that is divisible with 1 ,5 and 25.... but the prime number is the number which is divisible by 1 or 25....and any number sqrt which is divisible by more than two number so it's not prime if a sqrt number which is only divisible by 1 or the sqrt number so it's prime....
         instead of this i<= sqrt(num) 
         we are using this i*i<=num so it will less iterate 
    */

    for(int i = 2; i*i <= num; i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    string choice;
    cout << "Shall we start the program to Check a number be expressed as a sum of two prime numbers? (yes/no): ";
    cin>>choice;

    while(choice == "yes"){
        int number;
        cout<<"Enter any number : ";
        cin>>number;
        bool found = false;

        /* i<=number/2
          using this coz let suppose number is 10....1st iteration i=2 i<= 5 ,j=10-2 check isprime(2) && isprime(8)
          2nd iteration i=3 i<= 5 ,j=10-3 check isprime(3) && isprime(7)
          3rd iteration i=4 i<= 5 ,j=10-4 check isprime(4) && isprime(6)
          4th iteration i=5 i<= 5 ,j=10-5 check isprime(5) && isprime(5)
          5th iteration i=6 and its greater than 5 so it's break... 
           ** num is 10 so j will check 8 to 5 and i will check 5 to 2 
        */

        for(int i = 2; i <=number/2;i++){
            int j = number - i;
            if(isPrime(i) && isPrime(j)){
                cout<<i<<" + "<<j<<" = "<<number<<endl;
                found = true;
            }
        }

        if(!found){
            cout<<"A number is not to be expressed as a sum of two prime numbers"<<endl;
        }
    
       cout << "Do you want to check another number? (yes/no): ";
       cin >> choice;
    }

    cout << "Program terminated. Goodbye!" << endl;
    return 0;
}