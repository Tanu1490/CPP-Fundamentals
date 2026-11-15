#include <bits/stdc++.h>
using namespace std;

// A list in C++ is a sequence container that allows you to store elements one after another.

// Implemented as a doubly linked list and maintains both front and back for fast operations on both the ends.

// Data is stored in non-contiguous memory, allowing fast insertion and deletion anywhere in the list (beginning, middle, or end).

// Array / Vector wins
// Fast access and traversal
// - Random access: O(1)
// - Better cache locality
// - Less memory overhead

// List wins
// Insertion and deletion at known positions
// - Beginning: O(1)
// - End: O(1)
// - Middle: O(1) when iterator is already available

int main()
{

    // list creation
    list<int> myList;

    // insertion
    myList.push_back(10);
    myList.push_back(20);
    myList.push_back(30);
    myList.push_front(80);
    myList.push_front(60);
    myList.push_front(70);
    myList.push_front(40);

    for (int i : myList){
        cout << i << " ";
    }
    cout<<endl;

    myList.pop_front();
    myList.pop_back();

     for (int i : myList){
        cout << i << " ";
    }
    cout<<endl;

    cout<<"front Element of list : "<<myList.front()<<endl;
    cout<<"back Element of list : "<<myList.back()<<endl;

    list<int>::iterator it = myList.begin();
    while(it != myList.end()){
        cout<<*it<<endl;
        it++;
    }

    cout<<"Size of list : "<<myList.size()<<endl;
    myList.clear();
    cout<<"Size of list : "<<myList.size()<<endl;

    (myList.empty() == true) ? cout<<"List is empty."<<endl :  cout<<"List is not empty."<<endl;

    list<int> ls_first = {1,2,3,4,4,6,36,89,8,99,20,};

    ls_first.remove(4);

    for(int i : ls_first){
        cout<<i<<" ";
    }
    cout<<endl;

    list<int> v = {10,202,304,189};
    v.swap(ls_first);

    for(int i : v){
        cout<<i<<" ";
    }
    cout<<endl;

    list<int> items = {10,20,30,40};

    // next() and prev() return new iterators, while advance() modifies the iterator you pass to it. Also, never move an iterator outside the valid range of its container.
    items.insert(items.begin() , 67);

    // items.insert(items.begin() + 1 , 67); --> can't use as list uses bidirectional iterators, which support moving forward and backward, one step at a time.

    auto iter = items.begin();
    advance(iter, 2);
    items.insert(iter , 70);

    for(int i : items){
        cout<<i<<" ";
    }
    cout<<endl;

    items.insert(next(iter,2) , 45);

     for(int i : items){
        cout<<i<<" ";
    }
    cout<<endl;
    
    items.insert(prev(iter,1) , 100);

     for(int i : items){
        cout<<i<<" ";
    }
    cout<<endl;



    return 0;
}