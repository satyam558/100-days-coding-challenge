#include <iostream>
#include <math.h>
using namespace std;

int main(){
    string choice;
    cout << "Shall we start the program of LCM? (yes/no): ";
    cin>>choice;

    while(choice == "yes"){
        int number1,number2;
        cout<<"enter 1st number : ";
        cin>>number1;
        cout<<"enter 2nd number : ";
        cin>>number2;

        int a = number1; int b = number2;
        int max = (number1 > number2)?number1:number2;
        int lcm;

        //A number which is divisible by num1 and num2 that number is the lcm

        for(int i = max;i<=number1*number2;i++){
            if(i%number1==0 && i%number2==0){
                lcm = i;
                break;
            }

        }
        
       cout<<"LCM OF "<<a<<" and "<<b<<" is "<<lcm<<endl;

       cout << "Do you want to check another number? (yes/no): ";
       cin >> choice;
    }

    cout << "Program terminated. Goodbye!" << endl;
    return 0;
}
