#include <iostream>
using namespace std;

int getLength(char drr[])
{
    int count = 0;
    int index = 0;
    while (drr[index] != '\0')
    {
        count++;
        index++;
    }

    return count;
}

void concat(char a[], char b[])
{
    int aIndex = getLength(a);
    int bInddex = 0;
    while (b[bInddex] != '\0')
    {
        a[aIndex] = b[bInddex];
        bInddex++;
        aIndex++;
    }

    a[aIndex] = '\0';
}

void copy(char a[], char b[])
{
    int aIndex = 0;
    int bIndex = 0;

    while (a[aIndex] != '\0')
    {
        b[bIndex] = a[aIndex];
        aIndex++;
        bIndex++;
    }
    b[bIndex] = '\0';
}

bool compare(char a[], char b[])
{
    int aIndex = 0;
    int bIndex = 0;

    int aLength = getLength(a);
    int bLength = getLength(b);

    if(aLength != bLength) return false;

    while (aIndex < aLength)
    {
        if (a[aIndex] != b[bIndex])
        {
            return false;
        }
        else
        {
            aIndex++;
            bIndex++;
        }
    }

    return true;
}
int main()
{
    // A character array is a sequence of characters stored in a contiguous memory location, terminated by a null character (\0) to indicate the end of the string.

    // lower case to upper case : ch - 'a' + 'A'
    // Uppercase to lowercase: ch - 'A' + 'a'

    // The ASCII difference between uppercase and lowercase English letters is 32
    // Lowercase to uppercase: ch - 32
    // Uppercase to lowercase: ch + 32

    char ch[10];
    cout<<ch[5]<<endl;

    // char ch[10] = "Roberto"; //null char automatically initialised
    // cout<<ch[5]<<endl;

    cout<<"printing 7th index : "<<ch[7]<<endl;
    int asciiValue = ch[7];
    cout<<asciiValue<<endl;

    char arr[5];
    arr[0] = 'l';
    arr[1] = 'o';
    arr[2] = 'v';
    arr[3] = 'e';
    arr[4] = '\0';

    for(int i = 0 ; i < 5 ; i++){
        cout<<arr[i]<<" ";
    }

    // cout acts diff. with int and char
    int brr[3] = {1,2,3};
    cout<<brr<<endl;

    char crr[5] = "love";
    cout<<crr<<endl;

    // Find length
    char drr[17] = "Robert Downey Jr";
    cout<<getLength(drr)<<endl;

    // Concatenation
    char msg1[50] = "Hi";
    char msg2[50] = "Darlin";

    concat(msg1, msg2);
    cout << msg1 << endl;

    // Copying
    char a[20] = "Xaden Riorson";
    char b[20];

    copy(a, b);
    cout << b << endl;

    // Comparison
    char p[] = "cptsssss";
    char q[] = "cats";
    cout<<compare(p, q)<<endl;

    return 0;
}