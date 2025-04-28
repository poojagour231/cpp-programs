#include<iostream>
using namespace std;
class Base{
    public:
    void display(){
        cout<<"this is base"<<endl;
    }
};
class Derived1:public Base{
    public:
    void showDerived1(){
        cout<<"this is derived1"<<endl;
    }
};
class Derived2:public Base{
    public:
    void showDerived2(){
        cout<<"this is derived2"<<endl;
    }
};
class Derived3:public Base{
    public:
    void showDerived3(){
        cout<<"this is derived3"<<endl;
    }
};
int main(){
    Derived1 obj1;
    Derived2 obj2;
    Derived3 obj3;
    obj1.display();
    obj1.showDerived1();
    obj2.showDerived2();
    obj3.showDerived3();
    return 0;
}