
#include <iostream>

using namespace std;

int main(){
     
    int num;
    cin>>num;
    bool flag = 0;
    
    for(int i=2;i<num;i++){
         if(num%i==0){
              cout<<"non prime"<<endl;
              flag = 1;
              break;
         }
    }
    if(flag ==0){
         cout<<"Prime";
    }
     return 0;
}