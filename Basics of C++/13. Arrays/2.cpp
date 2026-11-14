#include <iostream>
using namespace std;

int printmultiples(int arr[] , int n){
    int count = 1;
    for(int i = 0 ; i < n ; i++){
        arr[i] = 10 * count;
        count++;
    }

    return arr[n];
}

int reverseArray(int crr[] , int size){
     for(int i = 0 ; i < size / 2 ; i++ ){
        int temp = crr[i];
        crr[i] = crr[size-i-1];
        crr[size-i-1] = temp;
     }

     return crr[size];
}

int main(){
    // // Populate array with Multiples of 10
    // int n = 10;
    // int arr[n];
    
    // printmultiples(arr,n);

    // for(int i = 1 ; i <= n ; i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;

    // // Initialise an array with -1 in each block

    // int brr[5];
    // for(int i = 0 ; i < 5 ;i++){
    //     brr[i] = -1;
    // }
    
    // for(int i = 0 ; i < 5 ; i++){
    //     cout<<brr[i]<<" ";
    // }
    // cout<<endl;

    // function to reverse an array
    // int size;
    // cout<<"Enter size of array : ";
    // cin>>size;

    // int crr[size];
    // cout<<"Enter elements of array : ";
    // for(int i = 0 ; i < size ; i++){
    //     cin>>crr[i];
    // }
    // reverseArray(crr,size);

    // cout<<"Reversed array : ";
    // for(int i = 0 ; i < size ; i++){
    //     cout<<crr[i]<<" ";
    // }
    // cout<<endl;

    // Flip 1 to 0 and 0 to 1 in an array

    int flip[10] = {1,0,0,1,1,0,1,1,0,1};

    cout<<"flipped array : ";
    for(int i = 0 ; i < 10 ; i++){
        // flip[i] ^= 1;
        // flip[i] = !flip[i]; 

        flip[i] == 1 ?  flip[i] = 0 : flip[i] = 1;
    }
    for(int i = 0 ; i < 10 ; i++){
        cout<<flip[i]<<" ";
    }





    return 0;
}