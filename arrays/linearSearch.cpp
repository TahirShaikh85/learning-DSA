
#include <iostream>

using namespace std;

int linearSearch(int arr[], int n,int key){
     for(int i=0;i<n;i++){
          if(arr[i]==key){
               return i;
          }
     }
     return -1;
}

int main()
{
  int n;
  cout<<"enter no of elements: ";
  cin>>n;
  int arr[n];
  
  cout<<"\nnow enter elements of an array "<<endl;
  for(int i=0;i<n;i++){
       cin>>arr[i];
  }
  
  cout<<"array is: ";
   for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
  }
  
  cout<<"\nenter key to be search: ";
  int key;
  cin>>key;
  
  cout<<"Element found at index: "<<linearSearch(arr,n,key);

   return 0;
}
