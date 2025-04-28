#include<iostream>
#include<string>
using namespace std;
class Appliance{
    public:
    
 virtual void display(){
    cout<<"this is appliance"<<endl;
 }
};
class WashingMachine:public Appliance{
    public:
    void display()override{
        cout<<"this is washingmachine clean the cloth very fastly"<<endl;
    
    }  
};
class Refrigerater:public Appliance{
    public:
    void display()override{
        cout<<"this is fridge cold water"<<endl;
    }
};
class Microwave:public Appliance{
    public:
    void display()override{
        cout<<"this is microwave cook foods quikly "<<endl;
    }
};
int main(){
    Appliance*app;
    WashingMachine m;
    Refrigerater r;
    Microwave mi;
    app=&m;
    app->display();
    app=&r;
    app->display();
    app=&mi;
    app->display();
}