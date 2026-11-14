#include <iostream>
using namespace std;

int main()
{
    int age;
    cin >> age;
    cout << "Age is :" << age << endl;

    // int, float, double will work normally
    // for bool, need to give either 0 or 1 as input

    bool istrue;
    cin >> istrue;
    cout << istrue << endl;

    string name;
    getline(cin, name);
    cout << name << endl;

    int marks;
    cin >> marks; // read the marks and leaves a newline in buffer

    if (cin.fail()) //--> checks whether last operation failed
    {
        cout << "invalid input." << endl;

        cin.clear(); // Reset cin's failed state but it does not remove invalid i/p from the input buffer.

        cin.ignore(1000, '\n'); //--> this removes invalid characters from the input buffer.
        // `1000` is the maximum number of characters to ignore, and `'\n'` tells `cin.ignore()` to stop when it reaches the newline (Enter key).
    }

    // getline reads the complete line of text including the space

    // There are two ways to take string input.
    string n;
    cin >> n;

    cout << n << endl;

    // after this name2 doesn't print

    // --- Why do we use cin.ignore() before getline()?---
    //   cin >> n reads Max.
    // The newline (\n) after 20 remains in the input buffer.
    // getline() encounters that newline immediately.
    // It reads an empty line.

    cin.ignore();

    string name2;
    getline(cin, name2);
    cout << name2 << endl;

    // What if you want to read only 10 characters?
    // There is another version of getline() for character arrays:
    char names[10];
    cin.getline(names, 10);
    cout<<names<<endl;
    // names = Character array.

    // 10 = Maximum buffer size, including the terminating null character \0.

    // Therefore, it can store at most 9 actual characters
    return 0;
}