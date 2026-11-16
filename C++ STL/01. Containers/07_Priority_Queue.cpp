#include <bits/stdc++.h>
using namespace std;

int main()
{
    //---------- Priority Queue-------------
    // A Priority Queue is a container adapter in C++ where elements are arranged according to their priority.

    // By default, a priority queue in C++ is a Max Heap.
    // This means the largest element is always at the top.

    priority_queue<int> pq;

    pq.push(10);
    pq.push(2);
    pq.push(19);
    pq.push(45);

    cout<<pq.top()<<endl;

    pq.pop();
    cout<<pq.top()<<endl;

    // min heap -the smallest element gets the highest priority.
    priority_queue<int , vector<int> , greater<int>> p;

    p.push(45);
    p.push(5);
    p.push(12);
    p.push(67);
    p.push(89);

    cout<<p.top()<<endl;

    p.pop();
    cout<<p.top()<<endl;

    priority_queue<int> xyz;
    xyz.push(56);
    xyz.push(6);
    xyz.push(50);

    pq.swap(xyz);
    cout<<xyz.top()<<endl;


    return 0;
}