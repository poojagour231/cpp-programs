#include<iostream>
using namespace std;
class Vehicle{
    public:
    virtual void speed() =0;
};
class Car:public Vehicle{
    public:
    void speed()override{
        cout<<"this is car speed"<<endl;

    }
    
};
class Bikes:public Vehicle{
    public:
    void speed()override{
        cout<<"this is bike speed"<<endl;
    }
};
int main(){
    Vehicle*v;
    Car c;
    Bikes b;
    v=&c;
    v->speed();
    v=&b;
    v->speed();

}