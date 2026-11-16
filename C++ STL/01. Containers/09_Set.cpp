#include <bits/stdc++.h>
using namespace std;

int main(){
    //-----Set:
    // Sorted collection of unique elements.
    // Elements are stored in sorted order, and duplicates are automatically removed.
    // Provides efficient insertion, deletion, and search operations.
    
    // set<int> s = {1,2,3,5,12,3,3,5,31};
    unordered_set<int> s = {1,2,3,5,12,3,3,5,34,78,31};

    for(auto it : s){
        cout<<it<<" ";
    }
    cout<<endl;

    set<char> c;
    c.insert('a');
    c.insert('b');
    c.insert('a');
    c.insert('r');
    c.insert('r');
    c.insert('e');

    set<char>::iterator i = c.begin();
    while(i !=c.end()){
        cout<<*i<<" ";
        i++;
    }
    cout<<endl;

    // cout<<c.size()<<endl;
    // c.clear();
    // cout<<c.size()<<endl;

    // c.erase(c.begin() , c.end());

    if(c.empty()){
        cout<<"Set is empty"<<endl;
    }else{
        cout<<"Set is not empty"<<endl;
    }

    if(c.find('e') != c.end()){
        cout<<"char is found."<<endl;
    }else{
        cout<<"char is not found."<<endl;
    }

    cout<<c.count('r')<<endl;  //if found - 1 otherwise 0
    return 0;
}