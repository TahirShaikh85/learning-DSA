/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
  char st[] = "ABCD";
  cout<<st[0]<<endl; // A
  cout << *(st)+0 <<endl; // 66 - ascii
  cout<<*(0+st)<<endl; // A
  cout<<0[st]<<endl; // A
  
  cout<<"--------------"<<endl;
  
  float arr[5] = {12.5,10.0,13.5,90.5,0.5};
  float *ptr1 = &arr[0];
  float *ptr2 = ptr1 + 4;
  cout<<*ptr2<<endl; // at third index = 90.5
  cout<<ptr2 - ptr1<<endl;
  
  cout<<ptr2<<" "<<ptr1;

    return 0;
}
