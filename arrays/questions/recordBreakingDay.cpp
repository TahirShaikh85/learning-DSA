/*
######### Question Asked in Google kickstart ####### 
https://www.youtube.com/watch?v=eJcBH0xvG98
https://codingcompetitions.withgoogle.com/kickstart/round/000000000019ff08/0000000000387171

Isyana is given the number of visitors at her local theme park on N consecutive days. 
The number of visitors on the i-th day is V. A day is record breaking if it satisfies 
both of the following conditions:

The number of visitors on the day is strictly larger than the number of visitors on 
each of the previous days.

• Either it is the last day, or the number of visitors on the day is strictly larger 
than the number of visitors on the following day.

Note that the very first day could be a record breaking day!
Please help Isyana find out the number of record breaking days.
*/

#include <iostream> 

using namespace std;

int main() 
{
   int n; // declare a variable to store the number of days
   cin>>n; 
   
   // declare an array of size n+1 to store the number of visitors on each day
   int a[n+1];
   // initialize the n+1st element of the array to -1
   a[n] = -1;
   // use a for loop to read in the values of the n integers and store them in the array
   for (int i=0;i<n;i++){
        cin>>a[i];
   }
   
   // if n is equal to 1, print "1" and return 0
   if(n == 1){
        cout<<"1"<<endl;
        return 0;
   }
   
   // initialize the variables that will be used in the for loop
   int ans = 0; // initialize ans to 0, which will be used to keep track of the number of record breaking days
   int mx = -1; // initialize mx to -1, which will be used to keep track of the maximum value seen so far
   
   // use a for loop to iterate through the elements of the array
   for(int i = 0; i<n; i++){
        // if the current element is strictly larger than the maximum value seen so far
        // and it is strictly larger than the next element in the array, it means that the current element is a record breaking day
        if(a[i] > mx && a[i] > a[i+1]){
             ans++; // increment ans
        }
        // update mx to the maximum of mx and the current element after each iteration
        mx = max(mx,a[i]);
   }
   
   // print the value of ans to standard output
   cout<<ans<<endl;

   // return 0 to indicate that the program ran successfully
   return 0;
}
