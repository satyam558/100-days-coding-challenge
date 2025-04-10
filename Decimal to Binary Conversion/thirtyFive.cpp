#include <iostream>
#include <math.h>
#include <cstring>
using namespace std;

int main(){
    string choice;
    cout << "Shall we start the program of Decimal to Binary Conversion? (yes/no): ";
    cin>>choice;

    while(choice == "yes"){
       
        int number;
        cout<<" Enter any decimal number : ";
        cin>>number;

        int binaryArr[32];
        int i = 0;

        while(number > 0){
            binaryArr[i] = number % 2;//suppose num is 13 if we divide it to 2 the remainder is 1...(sometime it's 1 or sometime it's 0)
            number/=2;//we get the quient which is 6
            i++;
        }

    //    cout<<binaryArr[3]<<binaryArr[2]<<binaryArr[1]<<binaryArr[0]<<endl;

    /*

       1. **Initialization**:  
          - `i = 0` initially. The loop starts, and `binaryArr[0]` stores the first remainder (`1` in this case).  
       
       2. **Iteration 1**:  
          - After storing the value in `binaryArr[0]`, `i` is incremented to **1**.  
          - `binaryArr[1]` stores the next remainder (`0`), and then `i` increments again to **2**.
       
       3. **Iteration 2**:  
          - At this point, `binaryArr[2]` stores the remainder (`1`), and `i` increments to **3**.
       
       4. **Iteration 3**:  
          - `binaryArr[3]` stores the final remainder (`1`), and `i` increments to **4**.
       
       5. **Loop Exit**:  
          - When `number` becomes **0**, the loop condition (`number > 0`) fails, and the loop terminates.  
          - **At this point, `i = 4`** because it was incremented after processing the last digit,
           but the loop exited before `i` was used to store another value.
    
    */
   
    for(int j = i-1 ;j>=0;j-- ){
        cout<<binaryArr[j]<<" ";
    }
    
    cout<<endl;

       cout << "Do you want to check another number? (yes/no): ";
       cin >> choice;
    }

    cout << "Program terminated. Goodbye!" << endl;
    return 0;
}