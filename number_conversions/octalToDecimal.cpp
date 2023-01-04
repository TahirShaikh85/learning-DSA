
#include <iostream>

using namespace std;

int octalToDecimal(int n){
     int ans = 0;
     int x = 1; // 8^0 = 1
     
     while(n>0){
          int lastDigit = n%10;
          ans += x*lastDigit;
          x *= 8;
          n /= 10;
          
     }
     return ans;
}

int main()
{    
     int num;
     cin>>num;
     
     cout<<octalToDecimal(num)<<endl;
    return 0;
}
