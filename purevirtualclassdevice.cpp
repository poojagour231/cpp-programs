#include<iostream>
using namespace std;
class Device{
    public:
    virtual void turnOn()=0;
};
class Laptop:public Device{
    public:
     void turnOn()override{
        cout<<"this is laptop"<<endl;
     }
};
class SmartPhone:public Device{
    public:
    void turnOn()override{
        cout<<"this is smartphone"<<endl;
    }
};
int main(){
    Device*d;
    Laptop l;
    SmartPhone s;
    d=&l;
    d->turnOn();
    d=&s;
    d->turnOn();
}