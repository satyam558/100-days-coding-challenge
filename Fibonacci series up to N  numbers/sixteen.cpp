#include <iostream>
#include<math.h>
using namespace std;

int main() {
    string choice;
    cout << "Shall we start the program? (yes/no): ";
    cin >> choice;

    while (choice == "yes") {
        int num;
        cout<<"enter a number : ";
        cin>>num;
        int a=0,b=1;

        cout <<a<<" ,"<<b<<" ,";

        for(int i = 2;i<num;i++ ){
            int nexTerm = a + b;
            a = b;
            b = nexTerm;

            cout<<nexTerm<<" ,";
        }
        cout<<endl;
        
        cout << "Do you want to check another range? (yes/no): ";
        cin >> choice;
    }

    cout << "Program terminated. Goodbye!" << endl;
    return 0;
}