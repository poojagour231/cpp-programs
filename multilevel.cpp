#include<iostream>
using namespace std;
class A{
  public:
  void showA(){
    cout<<"this is class A"<<endl;
  }
};
class B:public A{
    public:
    void showB(){
        cout<<"this is class B"<<endl;
    }
};
class C:public B{
    public:
    void showC(){
        cout<<"this is classC"<<endl;
    }
};
int main(){
    C c1;
    c1.showA();
    c1.showB();
    c1.showC();
    return 0;
}