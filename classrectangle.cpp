// Create a class Rectangle with private attributes for length and width, and public methods 
to calculate area and perimeter.
#include<iostream>
using namespace std;
class Rectangle{
    private:
    int length;
    int width;
    public:
    Rectangle(int l,int w){
        length=l;
        width=w;
    }
    void display(){
        cout<<"the length is"<<length<<endl;
        cout<<"the width is"<<width<<endl;

    }
    int calculateArea(){
        return length*width;
    }
    int calculatePerimeter(){
        return 2*(length+width);
    }
};
int main(){
    Rectangle R1(3,4);
    R1.display();
    cout<<R1.calculateArea()<<endl;
    cout<<R1.calculatePerimeter()<<endl;
    return 0;
}
