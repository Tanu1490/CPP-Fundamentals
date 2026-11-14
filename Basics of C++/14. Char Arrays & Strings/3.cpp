#include <iostream>
using namespace std;

int main(){
//     ## Character Arrays vs. Strings in C++

// | Feature           | Character Array (`char[]`)              | String (`std::string`)                     |
// | ----------------- | --------------------------------------- | ------------------------------------------ |
// | Size              | Fixed size                              | Can grow or shrink dynamically             |
// | Memory access     | Direct access to individual characters  | Access using indexing and built-in methods |
// | Memory management | Manual for dynamically allocated arrays | Automatic                                  |
// | Null character    | Requires `'\0'` to mark the end         | Handles null termination internally        |
// | Safety            | No automatic bounds checking            | `at()` checks bounds                       |
// | Concatenation     | Uses `strcat()`                         | Uses `+` or `+=`                           |
// | Common functions  | `strlen()`, `strcpy()`, `strcmp()`      | `.length()`, `.append()`, `.compare()`     |

// Remember: Character arrays require more manual management, 
// while `std::string` provides convenient built-in operations and automatic memory management.


    // declare
    string name;
    name.push_back('B');
    name.push_back('e');
    name.push_back('n');

    cout<<name<<endl;

    // intialiazation
    string lastName = "Hamilton";

    // updation
    lastName = " Williams";

    // Library functions
    //  -> s.length()
    //  -> s.append(t)
    //  -> s.insert(pos, t) 
    //  -> s.substr(pos, len)
    //  -> s.compare(t)
    //  -> s.find(typos)

    cout<<name.length()<<endl;
    cout<<lastName.length()<<endl;

    cout<<name.append(lastName)<<endl;
    string thing = "Apple";
    string color  = "Red ";

    cout<<thing.insert(0,color)<<endl;
    cout<<lastName.substr(2,3)<<endl;

    string Clr1 = "Blue";
    string Clr2 = "Blue";

    Clr1.compare(Clr2) == 0 ? "Strings are equal." : "Strings are equal.";

    string s = "This is Tyrrendor.";
    string v = "Tyrrendors";
    cout<<"Word v found at index : "<<s.find(v)<<endl;

    // npos = no position
    // string::npos is not literally -1. It is the maximum value of size_t, 
    // which is equivalent to -1 when converted to that unsigned type.
    
    s.find(v) == string::npos ? (cout<<"v not found in s."<<endl) : cout<<"Word v found" ;
    return 0;
}