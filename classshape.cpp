// Implement a class Shape with derived classes Circle, Rectangle, and Triangle.
#include<iostream>
using namespace std;
class Shape{
    public:
    void display() {
        cout<<"this is the shape"<<endl;
    }
};
class Circle:public Shape{
    public:
    int radius;
    Circle(){
        cout<<"this is the circle"<<endl;
    }

};
class Rectangle:public Shape{
    public:
    int length;
    int breath;
    Rectangle(){
        cout<<"this is the Rectangle"<<endl;
    }
};
class Triangle:public Shape{
    public:
    Triangle(){
        cout<<"this is the triangle"<<endl;
    }
};   
int main(){
    Triangle t1;
    t1.display();
    
}
