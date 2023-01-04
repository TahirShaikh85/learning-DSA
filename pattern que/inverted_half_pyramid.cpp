
#include <iostream>

// ********* inverted half pyramid ***********
using namespace std;

int main()
{
     int n;
     cin>>n;
     
     for(int i=1;i<=n;i++){
          for(int j=i;j<=n;j++){
               cout<<"* ";
          }
         cout<<" "<<endl;
     }

     cout<<"############ shraddha di #######"<<endl;
     
     int x;
     cin>>x;
     for(int i=x; i>=1; i--){
          for(int j=1;j<=i;j++){
               cout<<"* ";
          }
          cout<<endl;
     }
    return 0;
}
