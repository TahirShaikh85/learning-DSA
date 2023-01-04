/*
######### Question Asked in Google kickstart ####### 
https://www.youtube.com/watch?v=eJcBH0xvG98
https://codingcompetitions.withgoogle.com/kickstart/round/000000000019ff47/00000000003bf4ed

An arithmetic array is an array that contains at least two integers and the differences between 
consecutive integers are equal. For example, [9, 10], [3, 3, 3], and [9, 7, 5, 3] are arithmetic 
arrays, while [1, 3, 3, 7], [2, 1, 2], and [1, 2, 4] are not arithmetic arrays.

Sarasvati has an array of N non-negative integers. The i-th integer of the array is A. 
She wants to choose a contiguous arithmetic subarray from her array that has the maximum length. 
Please help her to determine the length of the longest contiguous arithmetic subarray.
*/


#include <iostream> 

using namespace std; 

int main() 
{
     int n; 
     cin>>n; 
     int a[n]; 
     
     // use a for loop to read in the values of the n integers and store them in the array
     for(int i=0;i<n;i++){
          cin>>a[i];
     }
     
     // initialize the variables that will be used in the while loop
     int ans = 2; // initialize ans to 2, as a sequence with a length of 1 is not considered a sequence
     int pd = a[1] - a[0]; // initialize pd to the difference between the first two elements of the array
     int j = 2; // initialize j to 2, which will be used as an index for the array
     int curr = 2; // initialize curr to 2, which will be used to keep track of the current length of the sequence
     
     // use a while loop to iterate through the rest of the elements of the array, starting from the third element
     while(j<n){
          
          // if the difference between the current element and the previous element is the same as pd,
          // it means that the current element is part of the current sequence
          if(pd == a[j] - a[j-1]){
               curr++; // increment curr
          }
          
          // if the difference is not the same as pd, it means that the current sequence has ended
          // and a new sequence has started
          else{
               pd = a[j] - a[j-1]; // update pd to the difference between the current element and the previous element
               curr = 2; // reset curr to 2
          }
          
          // update ans to the maximum of ans and curr after each iteration
          ans = max(ans,curr);
          
          // increment j at the end of each iteration
          j++;
     }
     
     // print the value of ans to standard output
     cout<<ans;
     
     // return 0 to indicate that the program ran successfully
     return 0;
}
