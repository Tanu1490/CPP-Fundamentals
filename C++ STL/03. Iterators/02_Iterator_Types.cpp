#include <bits/stdc++.h>
using namespace std;

int main()
{
    //Input Iterator
    // Read only • Forward movement
    // - Used to read/access elements.
    // - Can move only forward (++).
    // - Cannot modify elements through the iterator.
    // Example: istream_iterator

    // It reads values from input (keyboard).
    // forward iterator
    istream_iterator<int> a(cin);
    cout<<*a<<endl;

    // Output Iterator can be used to write/insert values into a destination, but not read existing values through it.Example using ostream_iterator

    ostream_iterator<int> iter(cout, " "); 
    //" " → Prints a space after every value.

    *iter = 10;
    *iter = 20;
    *iter = 30;

    cout<<endl;
    //     Forward Iterator
    // - Can read & modify elements.
    // - Can move only forward (++).
    // - Cannot move backward (--).
    // supported by forward list , unordered set etc
    forward_list<int> ls;

    ls.push_front(1);
    ls.push_front(3);
    ls.push_front(8);
    ls.push_front(7);
    ls.push_front(2);

    forward_list<int>::iterator it = ls.begin();
    while (it != ls.end())
    {
        cout << *it << " ";
        it++;
    }
    cout<<endl;

    // Bidirectional Iterator
    // These can move both forward and backward within a container, and are supported by containers like less than ended queues. 
    list<int> myList;
    myList.push_back(10);
    myList.push_back(20);
    myList.push_back(30);

    // traverse
    list<int>::iterator i = myList.begin();

    while(i != myList.end()){
        // writing
        (*i) = (*i) + 2;
        // read
        cout<<(*i)<<" ";
        // move forward
        i++;
    }
    cout<<endl;

    list<int>::iterator x = myList.end();

    while(x != myList.begin()){
        // move backward
        x--;
        (*x) = (*x) + 2;
        cout<<(*x)<<" "; 
    }
    cout<<endl;

    // Random Access iterator - Day offer full navigation capabilities, allowing us to move To any element within a container in a constant time. 
    // Vector arrays and dequeues provide random access iterators

    vector<int> v = {2,4,6,8,10};

    vector<int>::iterator p = v.begin();

    while(p != v.end()){
        *p = *p + 10;
        cout<<*p<<" ";
        p++;
    }cout<<endl;

    vector<int>::iterator rev = v.end();

    while(rev != v.begin()){
        rev--;
        *rev = *rev + 10;
        cout<<*rev<<" ";    
    }cout<<endl;

    vector<int>::iterator q = v.begin() + 2;
    cout<<*q<<endl;
    return 0;
}