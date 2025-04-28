#include<iostream>
#include<string>
using namespace std;
class Student {
    private:
    string name;
    int rollno;
    int age;
    public:
    Student(){//default constructor 
        name="pooja";
        rollno=17805;
        age=18;
    }
    void display(){
        cout<<"name is:"<<name<<endl<<"rollno is:"<<rollno<<endl<<"age is:"<<age<<endl;
    }
};
int main(){
    Student s1;
    s1.display();
}