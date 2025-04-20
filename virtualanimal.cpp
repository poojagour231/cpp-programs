#include<iostream>
using namespace std;
class Animal{
    public:
    virtual void speak(){
        cout<<"this is animal";
    }
};
class Dog:public Animal{
    public:
    void speak()override{
        cout<<"this is dog"<<endl;
    }
};
class Cat:public Animal{
    public:
    void speak()override{
        cout<<"this is cat"<<endl;
    }
};
class Bird:public Animal{
    public:
    void speak()override{
        cout<<"this is bird"<<endl;
    }
};
int main(){
Animal* animal;
Dog d;
Cat c;
Bird b;
animal=&d;
animal->speak();
animal=&c;
animal->speak();
animal=&b;
animal->speak();
};
