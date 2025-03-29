#include <iostream>
#include<math.h>
using namespace std;

int main() {
    string choice;
    cout << "Shall we start the program? (yes/no): ";
    cin >> choice;

    while (choice == "yes") {
        int num1 ,num2;
        cout<<"enter first number : ";
        cin>>num1;
        cout<<"enter second number : ";
        cin>>num2;

        for(num1;num1<=num2;num1++){
            int sum = 0,digit;
            int num3 = num1;
            int temp = num1;
            int count = 0;
        
            while(temp != 0){
                temp/=10;
                count++;            
            }
            
            while(num3 != 0){
                digit = num3%10;
                sum = sum + pow(digit,count);
                num3/=10;
            }
           
            if(num1 == sum){
                cout<<sum<<" is an armstrong number"<<endl;
            }
           
        }
        cout<<endl;

        cout << "Do you want to check another range? (yes/no): ";
        cin >> choice;
    }

    cout << "Program terminated. Goodbye!" << endl;
    return 0;
}
