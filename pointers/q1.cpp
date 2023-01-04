#include <iostream>

using namespace std;

int main()
{
   int numbers[5];
   int *p;
   p = numbers;
   *p = 10; // 10 at index 0
   
   p = &numbers[2];
   *p = 20; // 20 at index 2
   
   p--; // now the pointer moved to index 1 whose value is 0
   *p = 30; // 30 at index 1
   
   p = numbers + 3;
   *p = 40; // 40 at index 3
   
   p = numbers;
   *(p+4) = 50; // 50 at index 4
   
   cout<<numbers[4]<<endl;
   cout<<*p;
   
   for (int n=0;n<5;n++){
       cout<<numbers[n]<<",";
   }
    

    return 0;
}
