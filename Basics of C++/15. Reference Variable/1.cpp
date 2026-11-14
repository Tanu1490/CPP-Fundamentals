#include <iostream>
using namespace std;

int main(){
    int a = 5;
    // Ref. variable can be used to call same memory location with different name

    int &temp = a;

    cout<<temp<<endl;
    temp--;
    cout<<temp<<endl;
    temp = temp*10;
    cout<<temp<<endl;

    return 0;
}