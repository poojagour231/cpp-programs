#include<iostream>
#include<string>
using namespace std;
class Car{
    private:
    string make,model;
    int year;
    public:
Car(int a,string mk,string md){
    year=a;
    make=mk;
    model=md;
}
void display(){
    cout<<make<<year<<model<<endl;
}
};
int main(){
    Car c1(2025,"tata","new");
    Car c2(2024,"marutii","20");
    c1.display();
    c2.display();
    return 0;
}

