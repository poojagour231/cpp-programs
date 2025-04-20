#include<iostream>
using namespace std;
class Employee{
    public:
    virtual void display(){
        cout<<"this is employee";
    }
};
class Manager:public Employee{
    public:
    void display()override{
        cout<<"this is manager"<<endl;
    }
};
class Worker:public Employee{
    public:
    void display()override{
        cout<<"this is worker"<<endl;
    }
};
int main(){
    Employee* employee;
    Manager m;
    Worker w;
    employee = &m;
    employee->display();
    employee = &w;
    employee->display();
};