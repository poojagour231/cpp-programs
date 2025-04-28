#include<iostream>
using namespace std;
class A{
    public:
    virtual void fun(){
        cout<<"pooja "<<endl;
    }
};
class B:public A{
    public:
    void fun(){
        cout<<"gour"<<endl;
    }
};
int main(){
    A*ptr;B obj;
    ptr=&obj;
    ptr->fun();
    return 0;
}