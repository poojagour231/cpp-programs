#include<iostream>
using namespace std;
class Rectangle{
    private :
    int length,width;
    public:
    Rectangle(){
        length=0;
        width=0;
    }
    Rectangle(int l,int w){
        length=l;
        width=w;
    }
    void display(){
        cout<<"length is:"<<length<<endl<<"width is:"<<width<<endl;
    }
};
int main(){
    Rectangle r1;//call by default
    Rectangle r2(3,5);//call by para
    r1.display();
    r2.display();
    
}