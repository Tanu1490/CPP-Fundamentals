#include <iostream>
using namespace std;

// must specify the number of columns in the parameter
void printArray(int brr[][4],int rowSize ,int colSize ){
    for(int i = 0 ; i < rowSize ; i++){
        for(int j = 0 ; j < colSize ; j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    // 2D Array

    // declare
    // int arr[5][4];

    // intialization
    // int arr[2][4] = {
    //                   {1,2,3,4},
    //                   {5,6,7,8}
    //                 };
    // for(int i = 0 ; i < 2 ; i++){
    //     for(int j = 0 ; j < 4 ; j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    int brr[3][4];
    int rowSize,colSize;
    cout<<" Enter row and column size : ";
    cin>>rowSize>>colSize;
     for(int i = 0 ; i < rowSize ; i++){
        for(int j = 0 ; j < colSize ; j++){
            cout<<" Enter value at brr["<<i<<"]["<<j<<"]: ";
            cin>>brr[i][j];
        }
        cout<<endl;
    }
    printArray(brr,3,4);
    return 0;
}