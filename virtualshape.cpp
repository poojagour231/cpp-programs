#include<iostream>
#include<cmath>
using namespace std;
class Shape{
    public:
    virtual void area(){
        cout<<"this is shape";
    }

};
class Circle:public Shape{
    float radius;
    public:
    Circle(float r){
        radius=r;
    }
    void area()override{
    cout<<"the area of circle is:"<<M_PI*radius*radius<<endl;
    }

};
class Rectangle:public Shape{
    int length;
    int width;
    public:
    Rectangle(int l,int w){
        length=l;
        width=w;
    }
    void area()override{
        cout<<"the area of rectangle is:"<<length*width<<endl;
    }
};
class Triangle:public Shape{
    int base;
    int heigth;
    public:
    Triangle(int b,int h){
        base=b;
        heigth=h;
    }
    void area()override{
        cout<<"the area of triangle:"<<0.5*base*heigth<<endl;
    }

};
int main(){
    Shape* shape;
    Circle c(5.0);
    Rectangle r(3,5);
    Triangle t(4,3);
    shape=&c;
    shape->area();
    shape=&r;
    shape->area();
    shape=&t;
    shape->area();

};
