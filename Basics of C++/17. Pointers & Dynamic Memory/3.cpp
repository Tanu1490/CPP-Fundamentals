#include <iostream>
using namespace std;


// ----Void Pointer (void*)---
// Definition: A void pointer is a generic pointer that can store the address of a variable of any data type (int, float, char, etc.).
// It does not know the data type of the variable it points to.
// We cannot directly dereference a void pointer (*ptr gives an error).
// We must typecast it into the appropriate pointer type before dereferencing.

int main(){
    int a = 5;
    float b = 5.7;
    char c = 'a' ;

    void *ptr ;

    ptr = &a; 
    cout<<*(static_cast<int*>(ptr))<<endl;

    ptr = &b; 
    cout<<*(static_cast<float*>(ptr))<<endl;

    ptr = &c; 
    cout<<*(static_cast<char*>(ptr))<<endl;
    return 0;
}