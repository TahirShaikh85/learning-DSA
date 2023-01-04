
#include <iostream>

using namespace std;

int binaryToDecimal(int n){
     int ans = 0;
     int x = 1; // initialy denotes 2^0 which is equal to 1
     while(n>0){
          int lastDigit = n%10;
          ans += x*lastDigit; 
          x = x * 2; // base
          n /= 10;
     }
     return ans;
}

int main()
{    
     int num;
     cin>>num;
     
     cout<<binaryToDecimal(num)<<endl;
    return 0;
}
