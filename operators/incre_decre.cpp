#include <iostream>

using namespace std;

// ******* preIncrement and postDecrement ***********

int main(){
     
/* e.g. 1
   int i = 1;
   
  //   1->2   3 
   i = i++ + ++i;
*/

/* e.g.2
     int i = 1;
     int j = 2;
     int k;
     
       // 1  2   1->2  2->3    3    4
     k = i + j + i++ + j++ + ++i + ++j;
     cout<<i<<" "<<j<<" "<<k<<endl;
*/

/* e.g.3
     int i = 0;
     
//      0->1    0    1     1->0
     i = i++ - --i + ++i - i--;
     cout<<i;
*/

/* e.g.4
     int i = 1,j=2,k=3;
     //     1->0  2->1   3->2
     int m = i-- - j-- - k--;
     
     cout<<i<<" "<<j<<" "<<k<<" "<<m<<" ";
*/ 
//  e.g.5

     int i=10, j=20, k;
     
   //  10->9  9->10  20->19  20    9   20->19    10    19->20
     k = i-- - i++ + --j -  ++j + --i -  j--   +  ++i - j++;
     
     cout<<i<<" "<<j<<" "<<k;
    return 0;
}