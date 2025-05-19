//Create a class Animal with derived classes Dog, Cat, and Bird.

#include<iostream>
using namespace std;
class Animal{
    public:
    void eat (){
        cout<<"eating"<<endl;


    }
};
class Dog:public Animal{
    public:
    void bark(){
        cout<<"barking"<<endl;
    }


};
class Cat:public Animal{
    public:
    void meow(){
        cout<<"meow"<<endl;
    }
};
class Bird:public Animal{
    public:
    void chichi(){
        cout<<"chichi"<<endl;
    }
};
int main(){
    Bird b1;
    b1.eat();
    b1.chichi();
    return 0;


}
