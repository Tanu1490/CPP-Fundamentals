#include <iostream>
using namespace std;


// 1. Class
// - A class is a user-defined data type.
// - It acts as a blueprint or template for creating objects.
// - It contains:
//   - Data members: Variables that store data.
//   - Member functions: Functions that perform operations on that data.
// - A class itself is a blueprint; objects are created using it.

// 2. Object
// - An object is an instance of a class.
// - It is created using the class.
// - It represents a real-world entity.
// - It has its own data members and can use the member functions of the class.
// - We use objects to access the members of a class (subject to access permissions)

// Think of building a house:
// - Class: Blueprint of a house.
// - Object: Actual house built using that blueprint.
// You can build multiple houses using the same blueprint, just as you can create multiple objects from one class.

class Student{

    public:
    // Data members / Properties
    string name;
    int age;
    int height;
    int weight;

    // Member functions / Behaviours
    void running(){
        cout<<"I am running."<<endl;
    }

};


int main(){

    // cout<<sizeof(Student)<<endl;
    // Object creation

    // Static way
    Student s1;
    s1.age = 15;
    s1.name = "Rex";
    s1.height = 180;
    s1.weight = 40;
    s1.running();

    // Dyanamic way 
    Student* s = new Student();

    (*s).age = 13;  // or  s->age = 13
    (*s).name = "Troy";
    (*s).height = 170;
    s->weight = 47;
    (*s).running();
    return 0;
}