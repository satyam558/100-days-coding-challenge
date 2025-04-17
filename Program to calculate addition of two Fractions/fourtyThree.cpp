#include <iostream>
using namespace std;

int findGcd(int n1,int n2){
  int gcd;
  for(int i = 1 ; i<=n1 && i<=n2;i++){
    if(n1%i==0 && n2%i==0){
      gcd = i;
    }
  }
  return gcd;
}

int main(){
     string choice;
     cout << "Shall we start the program to to calculate addition of two Fractions? (yes/no): ";
     cin>>choice;

     while(choice == "yes"){    

       int num1,den1;
       cout<<"Enter Numerator and Denomenator of first number : ";
       cin>>num1>>den1;

       int num2,den2;
       cout<<"Enter Numerator and Denomenator of Second number : ";
       cin>>num2>>den2;

       int lcm = (den1 * den2) / findGcd(den1, den2); // Finding LCM of denominators

       int sum = ((num1 * lcm) / den1) + ((num2 * lcm) / den2); // Adjusting numerators and summing fractions
       
       int num3 = sum / findGcd(sum, lcm); // Simplifying numerator using GCD
       
       lcm = lcm / findGcd(sum, lcm); // Simplifying denominator using GCD

       cout<<num1<<"/"<<den1<<" + "<<num2<<"/"<<den2<<" = "<<num3<<"/"<<lcm<<endl;

       cout << "Do you want to check another number? (yes/no): ";
       cin >> choice;

    }

    cout << "Program terminated. Goodbye!" << endl;
    return 0;
}


// #include <iostream>
// using namespace std;

// int main(){
//     string choice;
//     cout << "Shall we start the program to to calculate addition of two Fractions? (yes/no): ";
//     cin>>choice;

//     while(choice == "yes"){
//       int numerator1,numerator2,denominator1,denominator2;
//       cout<<"Enter Numerator 1 value : ";
//       cin>>numerator1;
//       cout<<"Enter Numerator 2 value : ";
//       cin>>numerator2;
//       cout<<"Enter Denominator 1 value : ";
//       cin>>denominator1;
//       cout<<"Enter Denominator 2 value : ";
//       cin>>denominator2;

//       int mul_deno = denominator1 * denominator2;
//       int mul_nume1_deno2 = numerator1 * denominator2;
//       int mul_nume2_deno1 = numerator2 * denominator1;
//       int Addition = mul_nume1_deno2 + mul_nume2_deno1;
     

//       if(denominator1 == denominator2 ){
//         int add_nume = numerator1 + numerator2;
//         cout<<add_nume<<"/"<<denominator1<<endl;
//       }else{
//          int temp,temp1;
//          while(Addition!=0 && mul_deno!=0){
//            temp = Addition/2 ;
//            Addition%=2;
//            temp1 = mul_deno/2;
//            mul_deno%=2;
//          }
//       cout<<temp<<"/"<<temp1<<endl;
//       } 
      
//        cout << "Do you want to check another number? (yes/no): ";
//        cin >> choice;
//     }

//     cout << "Program terminated. Goodbye!" << endl;
//     return 0;
// }
