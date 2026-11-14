#include <iostream>
using namespace std;


// Passing array in functions
void printArray(int count[] , int  n){
        for(int i = 0 ; i < n ; i++){
            cout<<count[i]<<" ";
        }
}

void printMltiple(int multiplesOf10[] , int n){
    for (int i = 0; i < n; i++)
    {
        multiplesOf10[i] = 10 * (i+1) ;
    }
}

int main()
{
    // // Array declaration
    int names[6];
    int arr[3];

    // initialization
    int brr[5] = {1,2,3,4,5};
    int crr[] = {10,20,30,40,50};

    int multiplesOf2[10] = {2,4,6,8,10,12,14,16,18,20};

    // traverse
    for(int i = 0; i<10 ; i++){
        cout<<multiplesOf2[i]<<endl;
    }

    // Input in Array
    int num[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the value of arr["<<i<<"] : ";
        cin >> num[i];
        cout<<endl;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << num[i] << " ";
    }

    int sum = 0;
    int numbers[] = {10,20,30,40,50};
    for (int i = 0; i < 5; i++)
    {
        sum += numbers[i];
    }
    cout <<"Todat sum  : "<< sum<< endl;

    int n = 5;
    int count[n] = {1,2,3,4,5};
    printArray(count,n);


    return 0;
} 