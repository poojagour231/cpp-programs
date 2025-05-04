// Write a program that demonstrates the use of virtual inheritance to avoid the diamond 
//problem in multiple inheritance. 
#include<iostream>
using namespace std;
class Person{
    public:
    Person(){
        cout<<"this is person"<<endl;
    }
    void showRole(){
       cout<<"i am person"<<endl;
    }
};
class Student:  virtual public Person{
    public:
    Student(){
        cout<<"this is student"<<endl;
    }
};
class Teacher: virtual public Person{
    public:
    Teacher(){
    cout<<"this is teacher"<<endl;
    }
};
class TeacherAssistence:public Student,public Teacher{
    public:
    TeacherAssistence(){
    cout<<"this is teacherassistence"<<endl;
    }
};
int main(){
    TeacherAssistence ta;
    ta.showRole();
}
