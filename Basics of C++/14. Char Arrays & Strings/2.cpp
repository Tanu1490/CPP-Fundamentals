#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char actual[] = "Xaden Riorson";
    char ans[100];

    strcpy(ans, actual);
    int length = strlen(actual);

    // ans = "Voilet";   //cannot modify like this

    ans[2] = 'k';
    int result = strcmp(ans, actual);

    //     strcmp() returns:
    // - 0 when both strings are equal.
    // - A negative number when the first string is smaller.
    // - A positive number when the first string is greater.

    char name[] = "Violet ";

    cout << ans << endl;
    cout << length << endl;
    cout << result << endl;
    cout << strcat(name, actual) << endl;

    // destination (name): The string to which characters are added.

    // source (actual): The string that gets appended.

    return 0;
}