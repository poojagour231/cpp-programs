#include <iostream>
using namespace std;

class Student {
public:
    string name;
    Student(string n){ 
     name=n; 
}
    void display() { 
        cout << "Name: " << name << endl; 
    }
};

int main() {
    Student *students[3];
    students[0] = new Student("Alice");
    students[1] = new Student("Bob");
    students[2] = new Student("Charlie");
    for (int i = 0; i < 3; i++) {
        students[i]->display();
        delete students[i];
    }
    return 0;
}


