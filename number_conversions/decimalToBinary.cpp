
#include <iostream>

using namespace std;


void decimalToBinary(int num){
     int binary[32];
     int counter = 0;
     while(num>0){
           int reminder = num%2;
          binary[counter] = reminder;
          counter++;
          num /= 2;
     }
        
  
   for (int j = counter - 1; j >= 0; j--)
        cout << binary[j];
}

int main()
{
   int num;
   cin>>num;
   
     decimalToBinary(num);

    return 0;
}
