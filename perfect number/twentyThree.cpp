#include <iostream>
using namespace std;

int main(){
    string choice;
    cout << "Shall we start the program to check strong numbers? (yes/no): ";
    cin>>choice;

    while(choice == "yes"){
        int number;
        cout<<"enter a number : ";
        cin>>number;
        int sum =0;

        cout<<"Divisiors are ";

        for(int i=1;i<number;++i){
            if(number %i == 0){
                cout<<i<<" ";
               sum+=i;
               
            }
        }
        cout<<"= "<<sum<<endl;

        if(number == sum){
            cout<<number<<" and "<<sum<<" is same so it's a perfect number"<<endl;
        }else{
            cout<<number<<" and "<<sum<<" is not same so it's not an perfect number"<<endl;
        }

        cout << "Do you want to check another number? (yes/no): ";
        cin >> choice;
    }

    cout << "Program terminated. Goodbye!" << endl;
    return 0;
}