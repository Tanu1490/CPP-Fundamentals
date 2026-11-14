#include <iostream>
using namespace std;

int main() {

    // 1. Implicit Type Casting (Automatic)
    int a = 10;
    float b = a;

    cout << "Implicit Casting (int to float): " << b << endl;


    // 2. Explicit Type Casting (C-style)
    float x = 10.75;
    int y = (int)x;

    cout << "C-style Casting (float to int): " << y << endl;


    // 3. Explicit Type Casting (static_cast)
    float p = 15.85;
    int q = static_cast<int>(p);

    cout << "static_cast (float to int): " << q << endl;


    // 4. Type Casting in Division
    int num1 = 5;
    int num2 = 2;

    cout << "Without Casting: " << num1 / num2 << endl;

    cout << "With Casting: "
         << static_cast<float>(num1) / num2 << endl;


    // 5. Char to Int
    char ch = 'A';
    int value = ch;

    cout << "Char to Int: " << value << endl;

    return 0;
}