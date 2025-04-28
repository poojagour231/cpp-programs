#include<iostream>
using namespace std;
class Shape{
    public:
    virtual void draw(){
        cout<<"this is shape"<<endl;
    }
};
class Circle:public Shape{
    public:
    void draw()override{
        cout<<"this is circle"<<endl;

    }
};
class Square:public Shape{
    public:
    void draw()override{
        cout<<"this is square";
    }
};
int main(){
    Shape*s;
    Circle c;
    Square sq;
    s=&c;
    s->draw();
    s=&sq;
    s->draw();
}
