#include <iostream>
using namespace std;

int main(){
     
    int num;
    cin>>num;
   
   int reverse =0;
   
   while( num>0){
        int lastdigit = num%10;
        // cout<<lastdigit<<endl;
        reverse = reverse*10 +  lastdigit;
       // cout<<reverse<<endl;
        num = num/10;
   }
  cout << reverse <<endl;
     return 0;
}