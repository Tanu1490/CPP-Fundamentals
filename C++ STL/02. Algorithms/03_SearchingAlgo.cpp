#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {10, 20, 30, 40, 50};

    // binary_search: Checks if a value exists in a sorted range.
    // Returns: bool (true or false).
    // Requires sorted data for the default comparison.
    // Time complexity: O(log n) for random-access iterators like vector and array.

    cout << binary_search(arr.begin(), arr.end(), 40) << endl;

    // lower and upper bound are used to find the position (iterator) of an element in a sorted range.
    // lower_bound() → Finds the first element that is greater than or equal to the target.

    // upper_bound() → Finds the first element that is strictly greater than the target.
    auto it = lower_bound(arr.begin(), arr.end(), 37);

    cout << *it << endl;

    auto itr = upper_bound(arr.begin(), arr.end(), 40);

    cout << *itr << endl;

    // equal_range() - find the range of elements equal to a given value in a sorted range.
    // It returns a pair of iterators.

    // first → Iterator pointing to the first element greater than or equal to the target (lower_bound).

    // second → Iterator pointing to the first element strictly greater than the target (upper_bound).

    auto range = equal_range(arr.begin(), arr.end(), 23);

    cout << *range.first << endl;
    cout << *range.second << endl;
    return 0;
}