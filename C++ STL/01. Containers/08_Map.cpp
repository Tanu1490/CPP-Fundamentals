#include <bits/stdc++.h>
using namespace std;

int main()
{

    // Map stores data in the form of key-value pairs.

    // - Key: Used to identify an element.
    // - Value: The data associated with that key.
    // - Every key must be unique.
    // - Elements are automatically stored in ascending order of keys.

    unordered_map<string, string> table;
    table["in"] = "India";
    table.insert(make_pair("en", "England"));

    pair<string, string> p;
    p.first = "br";
    p.second = "Brazil";

    table.insert(p);

    cout << table.size() << endl;
    // table.clear();
    // cout<<table.size()<<endl;

    table.empty() == true ? cout << "table is empty" << endl : cout << "table is not empty" << endl;

    cout << table.at("in") << endl;
    // table.at("in") = "Indonesia";
    table["in"] = "Ivory";
    cout << table.at("in") << endl;

    for (auto i : table)
    {
        cout << i.first << " " << i.second << endl; // i represents an entire key-value pair, not a single string.
    }

    unordered_map<string, string>::iterator it = table.begin();
    while (it != table.end())
    {
        cout << it->first << " " << it->second << endl;
        it++;
    }

    // table.erase(table.begin() , table.end());
    // cout << table.size() << endl;

    // table.find("in") - return iterator where key is present
    if (table.find("in") != table.end())
    {
        cout << "key found and value is : " << table.find("in")->second << endl;
    }
    else
    {
        cout << "key not found.";
    }

    cout << table.count("iy") << endl;

    map<int, char> m = {
        {45, 'a'},
        {34, 'b'},
        {30, 'c'}
    };

    for(auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    return 0;
}