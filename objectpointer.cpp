#include <iostream>
using namespace std;
class Student {
public:
 string name;
    int roll;
 void display() {
        cout << "Name: " << name << ", Roll: " << roll << endl;
    }
};
int main() {
    // Step 1: Create an object normally
    Student s1; // Step 2: Assign values
    s1.name = "Pooja";
    s1.roll = 101;
// Step 3: Create a pointer to the object
    Student* ptr = &s1;
    ptr->display();                         // calling member function
return 0;
}

