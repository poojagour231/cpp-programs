#include<iostream>
#include<string>
using namespace std;
class Person{
    private:
    string name;
    int age;
    public:
    Person& setName(const string &name){
    this->name=name;
    return *this;
}
   Person& setAge(int age){
    this->age=age;
    return *this;
   }
   void display(){
    cout<<"name:"<<name<<endl;
    cout<<"age:"<<age<<endl;
   }
};
int main(){
    Person p1;
    p1.setName("POOJA");
    p1.setAge(18);
    cout<<"person detail"<<endl;
    p1.display();

}