#include <iostream>
#include <math.h>
#include <cstring>
using namespace std;

int main(){
    string choice;
    cout << "Shall we start the program of HexaDecimal to Decimal Conversion? (yes/no): ";
    cin>>choice;

    while(choice == "yes"){
       
        char ch[100];
        cout<<"Enter any number : ";
        cin>>ch;

        int length = strlen(ch);
        int sum = 0;
        int j = 0;       
        
        for(int i = length - 1; i >= 0; i--){
             if(ch[i] >= '0' && ch[i] <= '9'){
                //char '0' to '9' ascii is 48 to 57
                sum += (int(ch[i]) - 48) * pow(16,j);
                j++;
             }else if (ch[i] >= 'A' && ch[i] <= 'Z'){
                //char 'A' to 'Z' ascii is 65 to 90
                sum += (int(ch[i]) - 55) * pow(16,j);
                j++;
            }
            else if (ch[i] >= 'a' && ch[i] <= 'z'){
                //char 'a' to 'z' ascii is 97 to 122
                sum += (int(ch[i]) - 87) * pow(16,j);
                j++;
            }
        }

        cout<<sum<<endl;
          
       cout << "Do you want to check another number? (yes/no): ";
       cin >> choice;
    }

    cout << "Program terminated. Goodbye!" << endl;
    return 0;
}