#include<iostream>
using namespace std;
class Shape{
    public:
    virtual void draw(){
        cout<<"shape class";
    }
};
class Circle:public Shape{
    public:
    void draw(){//overriding
        cout<<"circle class";

    }
};
int main(){
    Shape* ptr; Circle obj;
    ptr=&obj;
   ptr->draw();
   
    return 0;
}