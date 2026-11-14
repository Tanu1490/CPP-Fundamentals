#include<bits/stdc++.h>
using namespace std;

int main(){
    //---- Decimal to Binary---------
    // ------DIVISION METHOD-------
    int n;
    cin>>n;

    int binary = 0;
    int place = 1;

    // while(n>0){
    //     int rem = n % 2;
    //     binary +=  rem * place;
    //     place *= 10;
    //     n /= 2;
    // }

    // cout<<binary<<endl;

    // --------BITWISE OP METHOD--------
     while (n > 0) {
        binary += (n & 1) * place;
        place *= 10;
        n = n >> 1;
    }

    cout << binary;




    // ---------Binary to Decimal-----
    int x;
    cin>>x;

    int decimal = 0;
    int i = 0;
    while(x>0){
        int bit = x % 10;
        decimal  += pow(2,i) * bit;
        i++;
        x /= 10;
    }

    cout<<decimal<<endl;
    return 0;
}