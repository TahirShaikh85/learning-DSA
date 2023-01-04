
#include <iostream>

// notes -> https://drive.google.com/file/d/1QtBvLHK-8d-zPlKQp2pa3m_lgVnG1ecl/view

using namespace std;

int main()
{
   int a =(5,6,7); 
   // (Priority for the values inside a brackets () assigned to any variable is given rom" right to left".)
   cout<<a<<endl;

     int b = 2;
     b = 6,5,7;
     // (Priority for the values assigned to any variable is given from left to right
     cout<<b;
     
    return 0;
}
