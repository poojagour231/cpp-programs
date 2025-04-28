#include<iostream>
using namespace std;
class Base{
    public:
    void showBase(){
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
class Derived3:public Derived1,public Derived2{
    public:
    void showDerived3(){
        cout<<"this is derived3"<<endl;
    }
};
int main(){
    Derived3 d;
    d.showDerived1();
    d.showDerived2();
    d.showDerived3();

}