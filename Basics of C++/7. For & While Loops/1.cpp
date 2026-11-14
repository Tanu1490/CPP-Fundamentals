#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 10; i++)
    {
        cout << "Avengers Assemble" << endl;
    }

    for (int i = 1; i <= 10; i++)
    {
        cout << i << endl;
    }

    for (int i = 1; i <= 10; i++)
    {
        if(i > 5) break;
        cout << i << " ";
    }

    for (int i = 1; i <= 20; i++)
    {
        if(i == 5) continue;
        cout << i << " ";
    }

    int i = 1;
    while (i <= 10)
    {
        cout << i << " ";
        i++;
    }

    for (int i = 1; i <= 100; i++)
    {
        cout << i << " ";
    }

    for (int i = 100; i >= 1; i--)
    {
        cout << i << " ";
    }

    for (int i = 1; i <= 50; i++)
    {
        cout << "Steve" << endl;
    }

    for (int i = -10; i <=0; i++)
    {
        cout << i << " ";
    }

    for (int i = 1; i <= 10; i++)
    {
        cout << "7 x "<< i << " = "<< i *7 << endl;
    }

    for (char ch = 'A'; ch <= 'Z'; ch++)
    {
        cout << ch << " ";
    }

    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        cout << ch << " ";
    }

    return 0;
}

// for ( ; ; ) {
//     cout << "Hello";
// }

// This is a valid infinite loop because no condition is provided to stop it.

// We can also omit any one or two parts, but the semicolons must remain.