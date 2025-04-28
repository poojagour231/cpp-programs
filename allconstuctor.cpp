#include<iostream>
using namespace std;
class Point{
   private:
    int a;
    int b;
    public:
    Point(){
        cout<<"default cons"<<endl;
}
Point(int x,int y){
    a=x;
    b=y;
    cout<<"para cons"<<endl;
    
}
Point(Point &obj){
    a=obj.a;
    b=obj.b;
    cout<<"copy cons"<<endl;
}
void display(){
    cout<<"a is"<<a <<endl<<"b is"<<b<<endl;
}
};
int main(){
    Point p1(3,4);
    Point p2=p1;
    p2.display();
}