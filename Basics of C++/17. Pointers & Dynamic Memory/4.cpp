#include <iostream>
using namespace std;

int main(){
    // double pointers
    // int a = 5;

    // int* ptr = &a;
    // int** ctr = &ptr;
    // int*** dtr = &ctr;

    // cout<<"a : "<<a<<endl;
    // cout<<"&a : "<<&a<<endl;
    // cout<<"ptr : "<<ptr<<endl;
    // cout<<"&ptr : "<<&ptr<<endl;
    // cout<<"*ptr : "<<*ptr<<endl;
    // cout<<"ctr : "<<ctr<<endl;
    // cout<<"&ctr : "<<&ctr<<endl;
    // cout<<"*ctr : "<<*ctr<<endl;
    // cout<<"**ctr : "<<**ctr<<endl;
    // cout<<"dtr : "<<dtr<<endl;
    // cout<<"&dtr : "<<&dtr<<endl;
    // cout<<"*dtr : "<<*dtr<<endl;
    // cout<<"**dtr : "<<**dtr<<endl;
    // cout<<"***dtr : "<<***dtr<<endl;

    // Array of pointers
    // int b = 10;
    // int c = 20;
    // int d = 30;

    // int* arr[3] = {&b , &c, &d};

    // cout<<arr[0]<<endl;
    // cout<<*arr[0]<<endl;
    // cout<<arr[1]<<endl;
    // cout<<*arr[1]<<endl;
    // cout<<arr[2]<<endl;
    // cout<<*arr[2]<<endl;

    // pointer to an array

    int xyz[3] = {1,2,3};

    int (*p)[3] = &xyz;
    // *p → p is a pointer.
    // [3] → It points to an array of 3 elements.
    // int → Each element is an integer.
    // &xyz → Address of the entire array.
   
    cout<<p<<endl;
    cout<<(*p)[0]<<endl;
    cout<<(*p)[1]<<endl;
    cout<<(*p)[2]<<endl;


    return 0;
}