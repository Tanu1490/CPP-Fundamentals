#include <iostream>
using namespace std;

int main(){
    int budget;

    cout<<"enter your budget : "<<endl;

    cin>>budget;
    if (budget > 3000){
        cout<<"Eligible for voucher ."<<endl;
    }
    else{
        cout<<"Not eligible for voucher ."<<endl;
    }

    int marks;
    char grade;

    cout<<"Enter your marks : "<<endl;

    cin>>marks;

    if (marks > 90){
        grade = 'A';
    }else if(marks > 80){
        grade = 'B';
    }
    else if(marks > 80){
        grade = 'B';
    }else if(marks > 70){
        grade = 'C';
    }
    else if(marks > 70){
        grade = 'D';
    }else{
        cout<<"Invalid marks."<<endl;
    }

    cout<<"Grade is : "<<grade<<endl;
    

    int height , weight;
    cout<<"Enter height and weight : "<<endl;

    cin>>height>>weight;

    if (height > 5){
        if(weight >70){
            cout<<"BMI is good.";
        }else{
             cout<<"BMI is not good.";
        }
    }
    else{
         cout<<"code executed";
    }
    return 0;
}