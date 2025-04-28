#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int age;

 void display(){
        cout<<"name is:"<<name<<endl<<"age is:"<<age<<endl;
    }


};
int main(){
    Student*ptr=new Student;
    ptr->name="pooja gour";
    ptr->age=18;
    cout<<"student detail"<<endl;
    ptr->display();

}