#include <bits/stdc++.h>
using namespace std;

void printDouble(int a)
{
    cout << 2 * a << endl;
}

int even(int a)
{
    return a % 2 == 0;
}

int divBy10(int a)
{
    return a % 10 == 0;
}

int main()
{
    // for_each() - Used to perform an operation on every element of a container.

    vector<int> arr = {1, 2, 30, 4, 50, 5, 5, 60};
    // for_each(arr.begin() , arr.end() ,printDouble);

    // find() - Searches for a specific value and returns iter.
    int target = 30;
    auto it = find(arr.begin(), arr.end(), target);

    cout << *it << endl;

    // find_if() - Searches for 1st element that satisfies given condition.

    auto i = find_if(arr.begin(), arr.end(), even);
    cout << *i << endl;

    int cnt = count(arr.begin(), arr.end(), 5);
    cout << cnt << endl;

    int c = count_if(arr.begin(), arr.end(), divBy10);
    cout << c << endl;

    // sort(arr.begin() , arr.end());

    // reverse(arr.begin() , arr.end());

    vector<int> brr = {23, 23, 14, 23, 67, 90, 56, 45};

    // rotate() - Rotates elements by dividing the container at the middle position. The second part is moved to the beginning, followed by the first part.

    // Syntax: rotate(start, middle, end);

    // rotate(brr.begin() , brr.begin() + 3 ,brr.end());

    for (int i : brr)
    {
        cout << i << " ";
    }
    cout << endl;

    // unique() removes consecutive duplicate elements from a container by moving unique elements to the beginning.

    //  Use erase() along with it to remove the remaining elements and reduce the container's size.

    // The iterator itr points just after the last valid unique element.
    vector<int> crr = {1, 1, 5, 6, 2, 8, 6, 9, 10, 3, 85, 56, 2, 4, 6};

    sort(crr.begin(), crr.end());

    auto itr = unique(crr.begin(), crr.end());

    // This deletes everything from the new logical end(itr) to the actual end.

    crr.erase(itr, crr.end());

    // sort() + unique() + erase() → Common technique to remove all duplicates.

    for (int i : crr)
    {
        cout << i << " ";
    }
    cout << endl;

    //  partition() rearranges the elements of a container based on a given condition.
    // - Elements satisfying the condition are moved to the beginning.
    // - Elements not satisfying the condition are moved to the end.
    // - The relative order of elements is not preserved.
    
    partition(crr.begin(), crr.end(), even);

    for (int i : crr)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}