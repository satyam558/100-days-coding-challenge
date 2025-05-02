#include<iostream>
using namespace std;
int main(){
    string choice;
    cout << "Shall we start the program to find number of integers which has exactly x divisors? (yes/no): ";
    cin>>choice;

    while(choice == "yes"){
      int n , x ,score=0;
      cout<<"Enter a Number : ";
      cin>>n;
      cout<<"Enter a X value : ";
      cin>>x;
      for(int i = 1;i <= n;i++){
        int count = 0;
        for(int j = 1 ;j <= i;j++){
            if(i % j == 0){
            //    cout<<j<<" ";
               count++;
            //    cout<<count<<"/ "; 
            }
        }
        // cout<<"/sss"<<count<<"/hhhh ";
        if(count == x){
            // cout<<i<<" i";
            score++;
            // cout<<score;
        }
        // cout<<endl;
      }
      cout << "Number of integers from 1 to " << n << " having exactly " << x << " divisors: " << score << endl;

       cout << "Do you want to check another number? (yes/no): ";
       cin >> choice;
    }
}


// ✅ Example:
// Suppose N = 10 and X = 4

// Now, check each number from 1 to 10 and count its divisors:

// 1 → [1] → 1 divisor ❌

// 2 → [1, 2] → 2 divisors ❌

// 3 → [1, 3] → 2 divisors ❌

// 4 → [1, 2, 4] → 3 divisors ❌

// 5 → [1, 5] → 2 divisors ❌

// 6 → [1, 2, 3, 6] → 4 divisors ✅

// 7 → [1, 7] → 2 divisors ❌

// 8 → [1, 2, 4, 8] → 4 divisors ✅

// 9 → [1, 3, 9] → 3 divisors ❌

// 10 → [1, 2, 5, 10] → 4 divisors ✅

// ✅ So the answer is: 3 (numbers 6, 8, 10 have exactly 4 divisors)