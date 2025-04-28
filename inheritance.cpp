#include<iostream>
using namespace std;
class Person{
    public:
    string name;
    int age;
    Person() {
        cout<<"parent constructor \n";

    }

};
class Student:public Person{
    public:
    int rollno;
    Student(){
        cout<<"child constructor \n";
    }
    void getinfo(){
        cout<<"name"<<name<<endl;
        cout<<"age"<<age<<endl;
        cout<<"rollno"<<rollno<<endl;
    }
};
int main(){
    Student s1;
    s1.name="pooja";
    s1.age=18;
    s1.rollno=1234;
    s1.getinfo();
    return 0;
}
