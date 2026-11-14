#include <iostream>
using namespace std;

// -----Pass by Value
// void solve(int a){
//     cout<<" Inside function : "<<a<<endl;
//     a--;
//     cout<<" Inside function : "<<a<<endl;
// }

//------ Pass by reference
// void solve(int &a){
//     cout<<" Inside function : "<<a<<endl;
//     a--;
//     cout<<" Inside function : "<<a<<endl;
// }

void solve(char &c){
    cout<<" Inside function : "<<c<<endl;
    c++;
    cout<<" Inside function : "<<c<<endl;
}

// array is always passed as reference
int countEven(int arr[] , int size , int &count){
    for(int i = 0 ; i < size ; i++){
        if(arr[i] % 2 == 0){
            count++;
        }
    }

    return count;
}

int main(){
    // int a = 50;
    // cout<<" Inside main : "<<a<<endl;
    // solve(a);
    // cout<<" Inside main : "<<a<<endl;

    // char ch = 'a';
    // cout<<" Inside main : "<<ch<<endl;
    // solve(ch);
    // cout<<" Inside main : "<<ch<<endl;


    int arr[] = {1,2,3,4,5};
    int size = 5;
    int count = 0;
    countEven(arr,size,count);
    cout<<count<<endl;
    return 0;
}