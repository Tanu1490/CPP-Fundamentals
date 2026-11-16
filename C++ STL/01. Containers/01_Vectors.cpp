#include <bits/stdc++.h>
using namespace std;

int main(){
    // ------------VECTORS-------

    // Creation
    vector<int> marks;
    vector<int> miles(10);    //vector of size 10
    vector<int> distance(15,0);   //vector of size 15 initialized with 0

    vector<int> arr = {1,2,3,4,5,6};

    //.begin() - returns an iterator, pointing to the first element in the vector.
    cout<<"Element at arr[3] : "<<arr[3]<<endl;
    cout<< "Element at arr[0] : "<< *(arr.begin()) <<endl;

    //.end() - returns an iterator, pointing to position just after the last element. in the vector.
    cout<< "Element at arr[5] : "<< *(arr.end()-1) <<endl;

    // .push_back() , .pop_back() , size()

    marks.push_back(20);
    marks.push_back(45);
    marks.push_back(80);
    marks.push_back(10);

    marks.pop_back();
    cout<<"Size of vector marks : "<<marks.size()<<endl;

    // front() , back()
    cout<<"Element at front of vector marks : "<<marks.front()<<endl;

    cout<<"Element at back of vector marks : "<<marks.back()<<endl;

    // empty() , at()
    if(marks.empty() == true){
        cout<<"Vector is empty"<<endl;
    }
    else{
        cout<<"Vector is not empty"<<endl;
    }
    

    marks[0] = 100;
    cout<<"Element at marks[0] : "<<marks[0]<<endl;
    cout<<"Element at marks[0] : "<<marks.at(0)<<endl;

    // can use square brackets [ ] to access a vector element only when the index is within the vector's valid range.

    // vector<int> a;  --> a[0] is invalid as a is empty so there is no index 0
    // vector<int> a(10);  ---> a[0] is valid , a[10] is invalid

    vector<int> a(10); 
    cout<<a[1]<<endl;

    // capacity()
    cout<<"Capacity of vector marks at the moment : "<<marks.capacity()<<endl;

    // pop_back() removes an element but does not necessarily reduce the allocated capacity. therefore capacity = 4

    marks.push_back(90);
    marks.push_back(80);
    cout<<"Capacity of vector marks at the moment : "<<marks.capacity()<<endl;

    // size(): Returns the number of elements currently present in a vector.
    // capacity(): Returns the number of elements that can fit in the currently allocated memory without requiring reallocation.
    // Capacity commonly doubles when more memory is required (e.g., 1 → 2 → 4 → 8 → 16). However, this is implementation-dependent and not guaranteed by C++.capacity() is always greater than or equal to size().

    // reserve()  - requests the vector to allocate enough memory to hold at least n elements.
    vector<int> nums;
    cout<<"Capacity of vector before reserve : "<<nums.capacity()<<endl;

    nums.reserve(10);
    cout<<"Capacity of vector after reserve : "<<nums.capacity()<<endl;

    vector<int> t;
    cout<<"Max Size : "<<t.max_size()<<endl;
    
    // emplace_back() -Inserts a new element at the end of the vector.Constructs the element directly at the end
    // clear() -: Removes all elements from the vector, which are destroyed, and leaves it with a size of 0.
    vector<int> xyz;
    xyz.emplace_back(12);
    xyz.emplace_back(16);
    xyz.push_back(16);

    cout<<"Size of vector xyz : "<<xyz.size()<<endl;
    xyz.clear();
    cout<<"Size of vector xyz : "<<xyz.size()<<endl;

    // emplace() - Inserts an element at a specified position.
    xyz.emplace(xyz.begin(), 89);
    xyz.emplace(xyz.begin() + 1 , 89);
    xyz.emplace(xyz.begin() + 2 , 90);

    cout<<"xyz[1] : "<<xyz[1]<<endl;
    cout<<"xyz[2] : "<<xyz[2]<<endl;

    // insert()
    vector<int> v;
    v.insert(v.begin() , 50);
    cout<<"v[0] : "<<v[0]<<endl;
    v.push_back(10);
    v.push_back(30);
    v.push_back(90);
    v.push_back(110);
    v.push_back(109);
    v.push_back(102);

    // erase(iterator position) , erase(iterator first, iterator second)

    v.erase(v.begin() + 3 );

    for(int i : v){
        cout<<i<<" ";
    }
    cout<<endl;

    v.erase(v.begin() + 1, v.begin() + 4);

    for(int i : v){
        cout<<i<<" ";
    }
    cout<<endl;

    // swap()
    vector<int> sv;
    sv.push_back(10);
    sv.push_back(20);
    sv.push_back(30);

    sv.swap(v);

     for(int i : v){
        cout<<i<<" ";
    }
    cout<<endl;

    // traverse using iterator

    // vector<int>::iterator it = v.begin();
    // while(it != v.end()){
    //      cout<<*it<<" ";
    //      it++;
    // }

    // for(it ; it<v.end();it++ ){
    //     cout<<*it<<" ";
    // }

    for(auto it = sv.begin() ; it < sv.end();it++ ){
        cout<<*it<<" ";
    }

    
    return 0;
}