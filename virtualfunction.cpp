#include<iostream>
using namespace std;
class Parent{
    public:
    void getinfo(){
        cout<<"parent class";

    }
    virtual void hello(){
        cout<<"hello ";
    }
};
class Child:public Parent{
    public :
    void getinfo(){//overriding
        cout<<"child class";
    }
    void hello(){
        cout<<"hello form child"<<endl;
    }
};
int main(){
    Child c1;
    c1.hello();
    return 0;

}