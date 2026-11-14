#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    // Initialise All elements with zero
    // int arr[5] = {0};
    // printArray(arr,5);

    // If arrays initialised with even a single value then all other value will become zero. Otherwise, if no value is initialised, then all values are garbage values
    // int arr[5] = {-1};
    // printArray(arr,5);

    // int arr[5];
    // printArray(arr, 5);

    //memset() is a function used to initialize or fill an array's memory with a specific byte value.

    // It is available in the <cstring> header.

    // Syntax: memset(array, value, number_of_bytes);
    // sizeof(arr) gives the total size of the array in bytes.
    
    // memset() does not work as expected for initializing an integer array with values other than 0 or -1.
    // For example, memset(arr, 1, sizeof(arr)) does not fill the array with 1s; use fill() instead.
    
    // Important: memset() fills bytes, not individual integers. Use fill() to initialize an integer array with other values.

    // int arr[6];
    // memset(arr,-1,sizeof(arr));

    // printArray(arr,6);


    // Reverse using swap()
    int arr[5] = {20,40,50,89,78};
    for(int i = 0 ; i < 5/2 ; i++){
        swap(arr[i],arr[5-i-1]);
    }

    printArray(arr,5);
    return 0;
}