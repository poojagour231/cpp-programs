// Implement a program that demonstrates the use of virtual destructors in a class 
//hierarchy.
#include<iostream>
using namespace std;
class Person{
    public:
    Person(){
        cout<<"this constructor"<<endl;
    }
    virtual ~Person(){
        cout<<"this is destructor"<<endl;
    }
};
class Student:public Person{
    public:
    Student(){
        cout<<"this is constructor "<<endl;
    }
   ~ Student(){
    cout<<"this is destructor"<<endl;
   }
};
int main(){
    Person*obj=new Student;
    delete obj;
    return 0;
}
