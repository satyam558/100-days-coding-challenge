#include <iostream>
#include <math.h>
using namespace std;

int main(){
    string choice;
    cout << "Shall we start the program to check Friendly pair? (yes/no): ";
    cin>>choice;

    while(choice == "yes"){
        int number;
        cout<<"enter a number : ";
        cin>>number;

        int number2;
        cout<<"enter second number : ";
        cin>>number2;

        int sumTwo = 0;
        
        int sumOne = 0;
        cout<<"factor of "<<number<<" is ";

        for(int i = 1;i<number;i++){
            if(number%i == 0){
                 cout<<i<<" ";
                 sumOne += i;
            }
        }
        cout<<endl;
        cout<<"sum of factor "<<number<<" is "<<sumOne<<endl;

        cout<<"factor of "<<number2<<" is ";

        for(int i = 1;i<number2;i++){
            if(number2%i == 0){
                 cout<<i<<" ";
                 sumTwo += i;
            }
        }

        cout<<endl;

        cout<<"sum of factor "<<number2<<" is "<<sumTwo<<endl;

        if(sumOne/number == sumTwo/number2){
            cout<<"both number Quotient is same so it's a friendly pair"<<endl;
        }else{
            cout<<"both number Quotient is not same so it's not a friendly pair"<<endl;
        }

        cout << "Do you want to check another number? (yes/no): ";
        cin >> choice;
    }

    cout << "Program terminated. Goodbye!" << endl;
    return 0;
}