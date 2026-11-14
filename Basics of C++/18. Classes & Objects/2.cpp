#include <iostream>
using namespace std;

// A constructor is a special member function of a class that is automatically called when an object of that class is created.

// Its main purpose is to initialize the data members of an object.

class student{
    public:

    string name;
    int age;
    int height;
    // Deafult Constructor
    student(){
        name = "Fiora";
        age = 20;
        cout<<"Object initialization done."<<endl;
    }

   // parameterized Constructor
    // student(string n , int a){
    //     name = n;
    //     age = a;
    //     cout<<"Object initialization done."<<endl;
    // }

    student(string name , int age){
        // this->name refers to the current object's data member.
        // name refers to the constructor parameter.
        this->name = name;
        this->age = age;
        cout<<"Object initialization done."<<endl;
    }

    // Initializer List
    student(int myAge , int myHeight ):age(myAge), height(myHeight){}

    // destructor
    ~student(){
        cout<<"Destructor called."<<endl;
    }
    


};

int main(){
    // student s1;
    // cout<<s1.name<<" "<<s1.age<<endl;

    // student* s = new student();
    // cout<<s->name<<" "<<s->age<<endl;

    // student v("Vihan" , 16);
    // cout<<v.name<<" "<<v.age<<endl;

    // student* t = new student("Rohan" , 18);
    // cout<<t->name<<" "<<t->age<<endl;

    // student x(23 ,167);
    // cout<<x.age<<" "<<x.height<<endl;

    student* c = new student(45 , 134);
    cout<<c->height<<" "<<c->age<<endl;

    // delete s;
    // delete t;
    delete c;

    return 0;
}



// Situation	                           | new Student	      |  new Student()
// ----------------------------------------------------------------------------------------
// No user-defined constructor             | Uninitialized age	  |  age = 0
// User-defined constructor sets age = 21  | age = 21	          |  age = 21

// Important: Never rely on garbage values. Always initialize your variables.

// Also, don't try to print or read an uninitialized int; doing so can cause undefined behavior.

// A destructor is a special member function of a class that is automatically called when an object is destroyed.

// Its main purpose is to clean up resources used by an object, such as dynamically allocated memory.