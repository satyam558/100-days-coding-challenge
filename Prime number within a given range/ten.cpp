#include <iostream>
using namespace std;

int main() {
    string choice;
    cout << "Shall we start the program? (yes/no): ";
    cin >> choice;

    while (choice == "yes") {
        int num1,num2;
        cout<<"enter first number : ";
        cin>>num1;
        cout<<"enter second number : ";
        cin>>num2;

        for(num1;num1 <= num2;num1++){
            int count = 0;
            for(int i = 1; i<=num1;i++){
                if(num1%i == 0){
                    count++;
                }
            }

            if(count == 2){
                cout<<num1<<" is an prime number"<<endl;
            }else{
                cout<<num1<<" is not an prime number"<<endl;
            }
        }

        cout << "Do you want to check another range? (yes/no): ";
        cin >> choice;
    }

    cout << "Program terminated. Goodbye!" << endl;
    return 0;
}