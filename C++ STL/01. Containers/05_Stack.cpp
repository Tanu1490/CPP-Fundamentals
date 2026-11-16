#include <bits/stdc++.h>
using namespace std;

int main()
{
    // A Stack is a container that follows the LIFO (Last In, First Out) principle.

    // - The element inserted last is removed first.
    // - You can insert and remove elements only from the top.
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    cout << s.size() << endl;

    s.pop();
    cout << s.size() << endl;
    cout << s.top() << endl;

    (s.empty() == true) ? cout << "Stack is empty." << endl : cout << "Stack is not empty" << endl;

    stack<int> st;
    st.push(30);
    st.push(60);
    st.push(90);

    s.swap(st);

    stack<int> temp = s;
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }

    return 0;
}