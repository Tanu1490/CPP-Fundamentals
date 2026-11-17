#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Set algorithms are used to perform mathematical set operations on two sorted ranges
    vector<int> first = {1, 2, 3, 4};
    vector<int> second = {3, 4, 5, 6};

    vector<int> result;

    // set_union combines elements from both ranges.
    // set_union(first.begin(), first.end(), second.begin(), second.end(), inserter(result, result.begin()));

    // set_intersection()
    // Finds elements that are present in BOTH ranges.

    // set_intersection(first.begin(), first.end(), second.begin(), second.end(), inserter(result, result.begin()));

    // set_difference(first.begin(), first.end(), second.begin(), second.end(), inserter(result, result.begin()));

    set_symmetric_difference(first.begin(), first.end(), second.begin(), second.end(), inserter(result, result.begin()));

    for (int i : result){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}