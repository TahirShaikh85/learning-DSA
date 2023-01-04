
#include <iostream>
#include<climits>

using namespace std;

int main()
{
     // sum of all subarrays
     // no of possible subarrays n*(n+1)/2
     
     // e.g. here no of elements in an array is 5 
     //    therefore total no of subarrays possible is 15
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
       cin>>arr[i];
  }
  
  int curr = 0;
  for(int i =0;i<n;i++){
       curr = 0;
       for(int j=i;j<n;j++){
            curr += arr[j];
            cout<<curr<<endl;
       }
  }

    return 0;
}
