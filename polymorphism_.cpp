//Create a program that demonstrates the use of polymorphism to implement a dynamic 
//dispatch mechanism. 
#include<iostream>
using namespace std;
class Animal{
    public:
    virtual void speak(){
        cout<<"this is animal speak"<<endl;
    }
};
class Dog:public Animal{
    void speak(){
        cout<<"dog bark"<<endl;
    }
};
class Cat:public Animal{
    void speak(){
        cout<<"cat meow"<<endl;
    }
};
int main(){
    Animal*a;
    Dog d;
    Cat c;
    a=&d;
    a->speak();
    a=&c;
    a->speak();
}
