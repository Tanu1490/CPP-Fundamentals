#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Heap algorithms are used to create and manipulate a heap data structure.
    // make_heap()	| Converts a range into a heap           | O(N)
    // push_heap()	| Adds an element to an existing heap    | O(log N)
    // pop_heap()	| Moves the top element to the end       | O(log N)
    // sort_heap()	| Sorts a heap                           | O(N log N)
    // is_heap()	| Checks whether a range is a heap       | O(N)

    // Heap Algorithms work with random-access iterator ranges.

    vector<int> v = {22, 11, 55, 66, 77};

    make_heap(v.begin(), v.end());

    // By default, make_heap() creates a max heap.

    // The largest element is at v.front().
    for (int a : v){
        cout << a << " ";
    }
    cout << endl;

    //--- Insertion
    v.push_back(99);

    // use push_heap() to restore the heap property.

    // The range must already be a heap before calling push_heap()
    push_heap(v.begin(), v.end());

    for (int a : v){
        cout << a << " ";
    }
    cout << endl;

    //--- deletion
    // pop_heap() - Moves the largest element to the end of the vector.
    // pop_back() actually removes that element from the vector.
    pop_heap(v.begin() , v.end());

    for (int a : v){
        cout << a << " ";
    }
    cout << endl;

    v.pop_back();
    cout<<v.back()<<endl;

    sort(v.begin() , v.end());

    for (int a : v){
        cout << a << " ";
    }
    cout << endl;
    return 0;
}