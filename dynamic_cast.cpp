//22.	Write a C++ program to demonstrate the use of dynamic_cast for safe downcasting in a polymorphic class hierarchy.
#include<iostream>
using namespace std;
class Base{
    public:
    virtual void show(){
        cout<<"this is base class";
    }

};
class Derived:public Base{
    public:
    void show()override{
        cout<<"this is derived class";
    }
};
int main(){
    Base*b=new Derived;
    Derived*d=dynamic_cast<Derived*>(b);
    if(d){
        cout<<"downcasting success"<<endl;
        d->show();
    }
    else{
        cout<<"downcasting fail"<<endl;
    }

}