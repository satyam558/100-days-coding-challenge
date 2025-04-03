#include <iostream>
#include <math.h>
using namespace std;

int main(){
    string choice;
    cout << "Shall we start the program to check Abundant numbers? (yes/no): ";
    cin>>choice;

    while(choice == "yes"){
        int number;
        cout<<"enter a number : ";
        cin>>number;
        
        int sum = 0;
        cout<<"factor of "<<number<<" is ";

        for(int i = 1;i<number;i++){
            if(number%i == 0){
                 cout<<i<<" ";
                 sum += i;
            }
        }
        cout<<endl;

        if(sum > number){
            cout<<"The sum of these factors is "<<sum<<" and it is greater than "<<number<<" so it is an Abundant number"<<endl;
        }else{
            cout<<"The sum of these factors is "<<sum<<" and it is lower than "<<number<<" so it is not an Abundant number"<<endl;
        }

        cout << "Do you want to check another number? (yes/no): ";
        cin >> choice;
    }

    cout << "Program terminated. Goodbye!" << endl;
    return 0;
}