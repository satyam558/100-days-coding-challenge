#include<iostream>
using namespace std;
int main(){
    string choice;
    cout << "Shall we start the program to Find Area of Circle? (yes/no): ";
    cin>>choice;

    while(choice == "yes"){
        float r,Area;
        cout<<"Enter radius : ";
        cin>>r;

        Area = 3.14 * r * r;
        cout<<"Area of Circle is : "<<Area<<endl;

       cout << "Do you want to check another number? (yes/no): ";
       cin >> choice;
    }
}