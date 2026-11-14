#include <iostream>
using namespace std;

int main(){
    int i = 1;
    do{
        cout<<i<<" ";
        i++;
    }while(i <= 10 );


    int count  = 1;
    do{
        cout<<"6 x "<<count<<" = "<<count*6<<endl;
        count++;
    }while(count<=10);

    for(int i = 1; i <=5 ; i++);
    {
        cout<<i;
    }

    // ; after the for loop makes it an empty loop.
    // compilation error because i is out of scope.

 
    // cin checks whether input succeeds, while cout checks whether output succeeds.
    // int i ;

    if(cin>>i){
        cout<<"Robert";
    }

    if(cout<<"jk"){
        cout<<"Robert";
    }

    // Nested loops
    for(int i = 1; i<=3 ; i++){
        for(int j = 1 ; j <=3 ; j++){
            cout<<"i : "<<i << ", j : "<<j<<endl;
        }
    }
    for(int i = 1; i<=2 ; i++){
        for(int j = 1 ; j <=2 ; j++){
            cout<<"i : "<<i << ", j : "<<j<<i*j  <<endl;
        }
    }
    return 0;
}