#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Deque stands for Double Ended Queue.

    // It allows you to insert and remove elements from BOTH ends: Front & Back
    deque<int> dq;

    dq.push_back(10); // 10
    dq.push_back(20); // 10 20
    dq.push_back(30); // 10 20 30

    dq.push_front(40); // 40 10 20 30
    dq.push_front(50); // 50 40 10 20 30

    dq.pop_back(); // 50 40 10 20
    dq.pop_front(); // 40 10 20


    cout << dq.size() << endl;

    // Unlike queue, a deque supports indexing and iterators.
    cout << dq[0] << endl;
    cout << dq[1] << endl;
    cout << dq.at(1) << endl;

    auto it = dq.begin();
    while (it != dq.end())
    {
        cout << *it << endl;
        it++;
    }

    dq.empty() == true ? cout << "Deque is empty" << endl : cout << "Deque is not empty" << endl;

    // dq.clear();
    dq.erase(dq.begin() + 1, dq.begin() + 3); // 50 20
    cout << dq.size() << endl;

    dq.insert(dq.begin(), 5);
    cout << dq[0] << endl;

    deque<int> b;
    b.push_back(4);
    b.push_back(1);
    b.push_back(6);

    b.swap(dq);

    for (auto it : b)
    {
        cout << it << " ";
    }
    cout<<endl;

    deque<int> a = {1,2,34,45,12,34};

    a.erase(a.begin() + 1, a.begin() + 4);
    
    for (auto it : a)
    {
        cout << it << " ";
    }
    cout<<endl;

    a.swap(b);

    for (auto it : a)
    {
        cout << it << " ";
    }
    cout<<endl;
    return 0;
}


// Containers that don't support direct {} initialization : stack ,queue , priority queue