#include<iostream>
#include<string>
using namespace std;
class Vehicle{
    public:
    string name;
    int year;
    Vehicle(){
        cout<<"vehicle"<<endl;
    }  
};
class Car:public Vehicle{
    public:
    string model;
    Car(){
        cout<<"this is car"<<endl;
    }
    
};
class Bikes:public Car{
    public:
    string color;
    Bikes(){
      cout<<"this is bikes"<<endl;
    }
    void display(){
        cout<<"name:"<<name<<endl;
        cout<<"year:"<<year<<endl;
        cout<<"color:"<<color<<endl;
    }

};
int main(){
  
    Bikes b1;
    b1.name="hero";
    b1.year=2018;
    b1.model="old";
    b1.color="red";
    b1.display();
    return 0;
}