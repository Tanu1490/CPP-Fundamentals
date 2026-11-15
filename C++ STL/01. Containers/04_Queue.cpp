#include <bits/stdc++.h>
using namespace std;

int main()
{
    //----- Queue---
    // A Queue is a linear data structure that follows the FIFO (First In, First Out) principle.

    // This means the element inserted first will be removed first.

    // Addition / Insertion - Rear End
    // Removal / Deletion - Front End

    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    cout << "Size of queue : " << q.size() << endl;

    q.pop();

    cout << "Element at front : " << q.front() << endl;
    cout << "Element at back : " << q.back() << endl;

    // for(auto i : q){
    //     cout<<i<<" ";
    // }

    // Why doesn't it work?
    //  A queue is a container adaptor, not a normal STL container like vector or list.

    // It does not provide: begin(), end() , Iterator, Index-based access (q[0])
    // It only allows access to: front() , back() , push() ,pop()

    queue<int> first;
    queue<int> second;

    first.push(100);
    first.push(200);

    second.push(1);
    second.push(2);

    first.swap(second);
    cout << first.front() << " " << first.back() << endl;

    queue<int> x;

    x.push(1);
    x.push(2);
    x.push(3);
    x.push(4);
    x.push(15);
    x.push(19);

    // when empty is directly used on queue ,This will print the elements, but it will also empty your original queue.

    // Using temp preserves the original queue.
    queue<int> temp = x;

    while (!temp.empty())
    {
        cout << temp.front() << " ";
        temp.pop();
    }

    return 0;
}