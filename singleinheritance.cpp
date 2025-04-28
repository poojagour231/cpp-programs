#include<iostream>
#include<string>
using namespace std;
class Person{
    public:
    string name;
    Person(){
        cout<<"parent constructor"<<endl;
    }
};
class Employee:public Person{
    public:
    double salary;
    Employee(){
        cout<<"child constructor"<<endl;
    }
    void display(){
        cout<<"name :"<<name<<endl;
        cout<<"salary:"<<salary<<endl;
    }

};
int main(){
    Employee e1;
    e1.name="gopala";
    e1.salary=250000;
    e1.display();
    return 0;
}