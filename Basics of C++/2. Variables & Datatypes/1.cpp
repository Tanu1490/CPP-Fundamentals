#include <iostream>
using namespace std;

int main()
{
    // Variables and datatypes
    // ------var define---------
    int age = 17;
    cout<<"His age is : "<<age<<endl;

    // ----------var declaration-----------
    int Age;
    cout<<"His age is : "<<Age<<endl;

    //---------- var definition-----------
    int age1 = 56;
    cout << "His age is : " << age1 << endl;

    //---------- manipulation-------------
    age1 = 23;
    cout << age1 << endl;

    int cnt = 5;
    float share = 3.14;
    char alphabet = 'z';
    double weight = 55.47489;
    bool isMale = true;
    bool isChild = 1;
    bool isFemale = false;
    bool isGirl = 0;

    cout << cnt << endl;
    cout << share << endl;
    cout << weight << endl;
    cout << alphabet << endl;
    cout << isMale << endl;
    cout << isChild << endl;
    cout << isFemale << endl;
    cout << isGirl << endl;

    cout<<sizeof(age1)<<endl;

    int number = 34;
    {
        number = 23;
    }

    cout << number << endl;
    return 0;
}

// A `bool` stores `true` or `false`, which can be represented using just 1 bit. (00000000 or 00000001)

// However, it usually occupies 1 byte because a byte is the smallest independently addressable unit of memory on most systems.
