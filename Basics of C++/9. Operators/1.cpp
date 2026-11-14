#include <iostream>
using namespace std;

int main()
{
    // --------Unary OP----------
    int a = 5;
    cout << (++a) << endl;
    cout << (a++) << endl;
    cout << a << endl;
    cout << (--a) << endl;
    cout << (a--) << endl;
    cout << a << endl;

    // --------Arithmetic OP--------
    a = 10; 
    int b = 5;
    cout << (a + b) << endl;
    cout << (a - b) << endl;
    cout << (a * b) << endl;
    cout << (a / b) << endl;
    cout << (a % b) << endl;

    // -------Relational OP---------
    cout << (a > b) << endl;
    cout << (a < b) << endl;
    cout << (a >= b) << endl;
    cout << (a <= b) << endl;
    cout << (a == b) << endl;
    cout << (a != b) << endl;

    // ---------Logiccal OP-------
    bool cond1 = 1;
    bool cond2 = 1;
    bool cond3 = 0;

    if(cond1 && cond2 && cond3){
        cout<<"All cond are true."<<endl;
    }else{
        cout<<"All cond are not true."<<endl;
    }

    if(cond1 || cond2 || cond3){
        cout<<"All cond are true."<<endl;
    }else{
        cout<<"All cond are not true."<<endl;
    }

    bool cond = (5 != 10);
    cout<< !cond <<endl;

    // ---------Assignment OP--------
    int count  = 5;
    count += 5;
    cout<<count<<endl;

    count *= 10;
    cout<<count<<endl;

    // ----------Bitwise OP---------
    cout << (5 & 4) << endl;  // only 1 1 is true
    cout << (5 | 4) << endl;  // only 0 0 is false
    cout << (~1) << endl;     // tilda ~ it flips bits 0 -> 1 and vice versa
    cout << (5 << 1) << endl; // left shift by 1 bit so multiply by 2 one time
    cout << (5 << 3) << endl;

    cout << (5 >> 1) << endl; // right shift by 1 bit so divide by 2 one time

    cout << (24 >> 3) << endl;

    cout << (5 ^ 5) << endl; // xor ^ if same bit then 0 if diff then 1
    // same bit 5 and 5 it will cancel out and give 0

    cout << (5 ^ 4) << endl;
    return 0;
}

// Bitwise operators cannot be directly applied to floating-point types such as float and double.

// It can only be applied to integral types such as int, char, and long.

// For floating-point numbers, use the fmod() function from the <cmath> library.
// cout << fmod(10.5, 3.0);  // Output: 1.5
