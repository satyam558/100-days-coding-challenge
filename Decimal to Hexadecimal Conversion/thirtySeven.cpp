#include <iostream>
#include <math.h>
#include <cstring>
using namespace std;

int main(){
    string choice;
    cout << "Shall we start the program of Decimal to HexaDecimal Conversion? (yes/no): ";
    cin>>choice;

    while(choice == "yes"){
        int number;
        cout<<"Enter any decimal number : ";
        cin>>number;

        int binaryArr[32];
        int i = 0;

        while(number > 0){
            binaryArr[i] = number % 16;//suppose num is 1254 if we divide it to 16 the remainder is 6...
            number/=16;//we get the quient which is 78
            i++;
        }

      //  cout<<binaryArr[2];
      // //  binaryArr[1] = 14; // Assume 14 is already stored in binaryArr[2]
      //  char hexChar = (binaryArr[1] < 10) ? ('0' + binaryArr[1]) : ('A' + binaryArr[1] - 10);
      //  cout << hexChar; // Outputs 'F'
      //  cout<<binaryArr[0]<<endl;

    /*

       1. **Initialization**:  
          - `i = 0` initially. The loop starts, and `binaryArr[0]` stores the first remainder (`6` in this case).  
       
       2. **Iteration 1**:  
          - After storing the value in `binaryArr[0]`, `i` is incremented to **1**.  
          - `binaryArr[1]` stores the next remainder (`14`), and then `i` increments again to **2**.
       
       3. **Iteration 2**:  
          - At this point, `binaryArr[2]` stores the final remainder (`4`), and `i` increments to **3**.
       
       4. **Loop Exit**:  
          - When `number` becomes **0**, the loop condition (`number > 0`) fails, and the loop terminates.  
          - **At this point, `i = 3`** because it was incremented after processing the last digit,
           but the loop exited before `i` was used to store another value.
    
    */
   
    for(int j = i-1 ;j>=0;j-- ){
        char hexChar; 
         if(binaryArr[j] < 10){
            hexChar = '0' + binaryArr[j];
            cout<<hexChar<<"";
         }else {
            hexChar = 'A' + binaryArr[j] - 10;
            cout<<hexChar<<"";
         }
    }
    
    cout<<endl;

       cout << "Do you want to check another number? (yes/no): ";
       cin >> choice;
    }

    cout << "Program terminated. Goodbye!" << endl;
    return 0;
}