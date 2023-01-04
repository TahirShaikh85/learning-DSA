
#include <iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
     
     string str = "tahir";
     
     // convert into capital
     for(int i = 0;i<str.size();i++){
          if(str[i] >= 'a' && str[i] <= 'z'){
               str[i] -= 32;
          }
     }
     cout<<str<<endl;
     
     // convert to lower case
     
     for(int i = 0;i<str.size();i++){
          if(str[i] >= 'A' && str[i] <= 'Z'){
               str[i] += 32;
          }
     }
     cout<<str<<endl;
     cout<<'a'-'A'<<endl;

     
     // inbuilt function
     string str2 = "shaikh";
     
     transform(str2.begin(), str2.end(), toupper);
     transform(str2.begin(), str2.end(), tolower);
     
    return 0;
}
