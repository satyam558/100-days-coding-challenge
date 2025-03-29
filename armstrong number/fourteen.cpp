#include <iostream>
#include<math.h>
using namespace std;

int main() {
    string choice;
    cout << "Shall we start the program? (yes/no): ";
    cin >> choice;

    while (choice == "yes") {
        int num;
        cout<<"enter an number : ";
        cin>>num;
        int digit;
        int sum=0;
        int temp = num;
        int count = 0; 
        int orgNum = num;

        while(temp != 0){
            temp/=10;
            count++;
            
        }

        while(num != 0){
            digit = num%10;
            sum = sum + pow(digit,count);
            num/=10;
        }

        if(orgNum == sum){
            cout<<"sum of "<<orgNum<<" and "<<sum<<" are same so it's an armstrong number"<<endl;
        }else{
            cout<<"sum of "<<orgNum<<" and "<<sum<<" are not same so it's not an armstrong number"<<endl;
        }

        cout << "Do you want to check another range? (yes/no): ";
        cin >> choice;
    }

    cout << "Program terminated. Goodbye!" << endl;
    return 0;
}