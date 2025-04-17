#include <iostream>
using namespace std;

int main(){
    string choice;
    cout << "Shall we start the program to Replace all 0's with 1 in a given integer? (yes/no): ";
    cin>>choice;

    while(choice == "yes"){
        int number;
        cout<<"Enter a number : ";
        cin>>number;
        int temp=number;
        int digit;
        int sum=0;

        while(number != 0){
           digit = number%10;
           if(digit == 0 ){
            digit = 1;
           }
           sum = sum * 10 + digit;//0*10+1=1,1*10+1=11,11*10+1=111
           number/=10;
        }

        int temp1 =sum;
        int digit1;
        int sum1 = 0;

        while(sum != 0){
            digit1 = sum %10;
            sum1 = sum1 * 10 + digit1;
            sum/=10;
        }

        cout<<"Before Replacing the number ("<<temp<<") and after Replacing the number "<<sum1<<endl;

       cout << "Do you want to check another number? (yes/no): ";
       cin >> choice;
    }

    cout << "Program terminated. Goodbye!" << endl;
    return 0;
}


//2nd way

// #include <iostream>
// using namespace std;

// int main() {
//     string choice;
//     cout << "Shall we start the program to Replace all 0's with 1 in a given integer? (yes/no): ";
//     cin >> choice;

//     while (choice == "yes") {
//         int number;
//         cout << "Enter a number: ";
//         cin >> number;
//         int temp = number;
//         int digit, newNumber = 0, place = 1;

//         while (number != 0) {
//             digit = number % 10;
//             if (digit == 0) {
//                 digit = 1; // Replace 0 with 1
//             }
//             newNumber += digit * place; // Correctly reconstruct the number
//             place *= 10; // Move to the next decimal place
//             number /= 10;
//         }

//         cout << "Before Replacing the number (" << temp << ") and after Replacing the number " << newNumber << endl;

//         cout << "Do you want to check another number? (yes/no): ";
//         cin >> choice;
//     }

//     cout << "Program terminated. Goodbye!" << endl;
//     return 0;
// }
