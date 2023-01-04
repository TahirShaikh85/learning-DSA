#include <iostream>

using namespace std;


int main(){
    int ***r,**q,*p,i=8;
    p = &i;
    (*p)++;
    cout<<*p<<endl;
    
    q = &p;
    (**q)++;
    cout<<**q<<endl;
    
    r = &q;
    cout<<*p<<" "<<**q<<' '<<***r;
    return 0;
}