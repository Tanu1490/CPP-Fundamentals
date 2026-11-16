#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {10,20,30,40,50};
    vector<int> brr = {2,4,6,8,10};

    int totalSum = accumulate(arr.begin(), arr.end(), 0);

    cout<<totalSum<<endl;

    int innerProduct = inner_product(arr.begin(),arr.end(),brr.begin(),0);

    cout<<innerProduct<<endl;

    // Calculates cumulative sums and returns	A sequence of sums

    vector<int> result(brr.size());
    partial_sum(brr.begin(), brr.end(),result.begin());

    for(auto i : result){
        cout<<i<<" ";
    }
    cout<<endl;

    // iota - fill a range with consecutive increasing values, starting from a given value.
    vector<int> box(6);
    iota(box.begin() , box.end() , 100);

    for(auto i : box){
        cout<<i<<" ";
    }

    return 0;
}