#include<iostream>
using namespace std;
class Point{
    private:
    int x;
    int y;
    public:
    Point(){     //default cons
        x=0;
        y=0;
        cout<<"default cons"<<endl;
    }
    Point(int a,int b){   //parametarize cons
        x=a;
        y=b;
        cout<<"para cons"<<endl;
    }
    Point(Point &p){      //cpoy cons
    x=p.x;
    y=p.y;
    cout<<"copy cons"<<endl;

    }
    void display(){
        cout<<"point"<< x << y <<endl;
    }
};
int main(){
    Point p1;
    Point p2(3,4);
    Point p3=p2;
    p1.display() ;
    p2.display();
    p3.display();
}