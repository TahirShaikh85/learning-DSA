// pointers are variables that stores the address of other variables
// using pointers we can access and modify the value of variable 

#include <iostream>
using namespace std;

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;

}
void increment(int *incr){
    (*incr)++; // we need to dereference the pointer then increment it
}

int main(){
    int a = 10;
    int *aptr;
    aptr = &a;

    cout<<&a<<endl;
    cout<<aptr<<endl;
    cout<<*aptr<<endl;
    *aptr = 33;
    cout<<a<<endl;
    cout<<"-------Pointer and array--------"<<endl;

    // pointers and array

    int arr[] = {10,20, 30};
    cout<<*arr<<endl; // pointer of an array always points to the 0th index of the array

    int *ptr = arr;
    for(int i=0;i<3;i++){
        cout<<*ptr<<endl;
        ptr++;

    }
    cout<<"--Passing pointers to functions---"<<endl; // pass by reference
    
    int a1 = 2, b1 = 4;

    // int *apointer = &a1;
    // int *bpointer = &b1;

    swap(&a1,&b1);
    cout<<a1<<" "<<b1<<endl;

    int incr = 4;
    increment(&incr);
    cout<<"Increment: "<<incr;
    

    return 0;
}