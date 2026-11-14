#include <iostream>
using namespace std;

int main()
{
    // Dynamic memory allocation
    //we use new to allocate memory which returns an address and we store address in pointers That's why pointers are important for dynamic memory allocation

    // "Declare a pointer named ptr that stores the address of a newly allocated integer in dynamic memory."

    // Dynamically allocated memory does not have a variable name of its own. We access it using a pointer that stores its memory address.

    // remember ptr is created in stack and new int is in heap

    // int* ptr = new int;
    // *ptr = 5;
    // cout<<*ptr<<endl;

    // delete ptr;
   
    // allocate array of size 5 in heap
    // ptr[i] = *(ptr + i) where ptr stores address of 1st element 
    int* p = new int[5];
    p[0] = 1;
    p[1] = 2;
    p[2] = 3;
    *(p + 3) = 4;
    *(p + 4) = 5;

    for(int i = 0 ; i < 5 ; i++){
        cout<<p[i]<<" ";
    }

    delete[] p;
    return 0;
}


// Using int arr[n] is bad where n is determined at runtime is not standard C++. 

//The problem is that standard C++ requires the size of a built-in array to be a compile-time constant.

//Additionally, local arrays are generally allocated on the stack, which has limited memory. If the user enters a very large value of n, it may cause stack overflow. Therefore, we prefer using vectors in C++, as they support runtime sizing and dynamically allocated memory.

// One thing to remember: The biggest reason int arr[n] is considered non-standard C++ is not just stack memory. It is because standard C++ does not support variable-length built-in arrays.