#include<iostream>
#include<string>
using namespace std;
class Student{
    private:
    string name;
    int age;
    public:
    Student(string n="pooja" ,int a=10){
        name=n;
        age=a;
        cout<<"default constructor "<<endl;
    }
    void display(){
        cout<<"name is "<<name<<endl<<"age is:"<<age<<endl;
    }

};
int main(){
    Student s1;
    Student s2("yash",23);
    Student s3("prenna",12);
    s1.display();
    s2.display();
    s3.display();
}