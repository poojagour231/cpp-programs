 //Create a class Circle with a friend function to calculate the area.
#include<iostream>
using namespace std;
class Circle{
    private:
    float pi;
    int radius;
    public:
    Circle(float p=0,int r=0){
        pi=p;
        radius=r;
    }
    friend int CalculateArea(Circle c1);

};
int CalculateArea(Circle c1){
   return c1.pi*c1.radius*c1.radius;
}
int main(){
     Circle c1(3.14,5);
     int totalArea=CalculateArea(c1);
     cout<<"area of circle is"<<totalArea<<endl;
}
