#include <iostream>
using namespace std;

void solve(int *arr){
   cout<<"Inside function : "<<sizeof(arr)<<endl;
}
int main()
{
    // Pointer is a variable that stores the memory address of an object.

    // declare
    // int *p;    // It is pronounced as "Pointer to Integer" or "Integer Pointer"

    // best practice to use:
    //int *p = nullptr; // Initialize pointers with nullptr when you don't yet have a valid address.

    // int number = 50;
    // cout << "Printing address of number: "<< &number << endl;
    // int *ptr = &number;
    // cout << number << endl;
    // cout << &number << endl;
    // cout << ptr << endl;
    // cout << &ptr << endl;
    // cout << *ptr << endl; //* is derefrence operator gives value present at address stored in ptr

    // (*ptr)++;
    // cout << number << endl;

    //One important concept to remember: A pointer is useful because it stores an address, and that address lets us access, modify and connect data in memory.

    int arr[] = {1,2,3,4,6};
    cout<<"Inside main : "<<sizeof(arr)<<endl;

    solve(arr);

    return 0;
}