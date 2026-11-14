#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}

void printName()
{
    for (int i = 1; i <= 5; i++)
    {
        cout << "RDJ" << endl;
    }
}

// func. declaration
int subtract(int a, int b);

void printMultiples(int num){
    for(int i = 1; i<=10 ; i++){
        cout<< num * i <<endl;
    }
    return; //return can be used in void without any value
}

float CelToFar(int cel){
    float far = ((cel * 9)/5) - 32;
    return far;
}

char convertToUppercase(char ch){
    char answer = ch - 'a' +'A';
    return answer;
}
int main()
{
    int x, y;
    cin >> x >> y;

    cout << "Sum is  : " << sum(x, y) << endl;

    printName();
    printName();
    printName();

    cout << "Subtract is  : " << subtract(x, y) << endl;


    int num = 9;
    printMultiples(num);

    int cel = 32;
    cout << "Far : "<<  CelToFar(cel)<<endl;

    char ch = 'r';
    cout<<convertToUppercase(ch);
    return 0;
}

// Func. definition
int subtract(int a, int b)
{
    return a - b;
}