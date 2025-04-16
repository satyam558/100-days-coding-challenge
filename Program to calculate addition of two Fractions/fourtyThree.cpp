#include <iostream>
using namespace std;

int main(){
    string choice;
    cout << "Shall we start the program to to calculate addition of two Fractions? (yes/no): ";
    cin>>choice;

    while(choice == "yes"){
      int numerator1,numerator2,denominator1,denominator2;
      cout<<"Enter Numerator 1 value : ";
      cin>>numerator1;
      cout<<"Enter Numerator 2 value : ";
      cin>>numerator2;
      cout<<"Enter Denominator 1 value : ";
      cin>>denominator1;
      cout<<"Enter Denominator 2 value : ";
      cin>>denominator2;

      int sum = denominator1 * denominator2;
      int m = numerator1 * denominator2;
      int n = numerator2 * denominator1;
      int ok = m+n;
     

      if(denominator1 == denominator2 ){
        int k = numerator1 + numerator2;
        cout<<k<<"/"<<denominator1<<endl;
      }else{
        cout<<ok<<"/"<<sum<<endl;
      }
      int temp,temp1;
      while(ok!=0 && sum!=0){
         temp = ok/2 ;
         ok%=2;
         temp1 = sum/2;
         sum%=2;
      }

      cout<<temp<<"/"<<temp1<<endl;

      
      
       cout << "Do you want to check another number? (yes/no): ";
       cin >> choice;
    }

    cout << "Program terminated. Goodbye!" << endl;
    return 0;
}