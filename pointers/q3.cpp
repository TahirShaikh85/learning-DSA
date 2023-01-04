/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int f(int x,int *py, int **ppz){
    int y,z;
    **ppz += 1; // 4 + 1
    z = **ppz; // z = 5
    
    *py += 2; // 5 + 2
    y = *py; // y = 7
    
    x += 3;
    return x + y + z;
}

int main(){
    int c,*b,**a;
    c = 4;
    b = &c;
    a = &b;
    cout<<"c="<<c<<endl;
    cout<<"b="<<b<<endl;
    cout<<"a="<<a<<endl;
    
    cout<<f(c,b,a);
    return 0;
}