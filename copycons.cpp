#include<iostream>
#include<string>
using namespace std;
class Student{
    private:
    string name;
    int age;
    public:
     Student(string n,int a){//para
        name=n;
        age=a;
    }
    Student(Student &obj){
        name=obj.name;
        age=obj.age;
        cout<<"copy constructor"<<endl;
    }
    void display(){
        cout<<"name is:"<<name<<endl<<"age is:"<<age<<endl;
    }


};
int main(){
    Student s1("pooja",18);
    Student s2=s1;
    s2.display();
}