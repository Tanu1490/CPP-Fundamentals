#include <iostream>
using namespace std;

int main()
{
    char grade;
    cout << "Enter your grade: " << endl;

    cin >> grade;
    switch (grade)
    {
    case 'A':
        cout << "Marks ranges b/w 90 & 100." << endl;
        break;
    case 'B':
        cout << "Marks ranges b/w 80 & 89." << endl;
        break;
    case 'C':
        cout << "Marks ranges b/w 70 & 79." << endl;
        break;
    case 'D':
        cout << "Marks ranges b/w 60 & 69." << endl;
        break;

    default:
        cout << "invalid grade." << endl;
        break;
    }
    return 0;
}

// expression can be int char enum only
// case are unique and can only use constant value, no range checking

// you cannot use double quotes (" ") for case as it is for strings not char