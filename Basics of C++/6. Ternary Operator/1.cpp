#include <iostream>
using namespace std;

int main(){
    // Ternary Operator
    int score;
    cin>>score;

    (score < 40)? cout<<"Fail" : cout<<"Pass"; 

    int x = 10 , y = 20;

    int result  = (x > y ) ? x : y;

    cout<<"Result : "<<result<<endl;
    return 0;
}