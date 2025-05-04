// Implement a program that demonstrates the use of smart pointers for dynamic memory 
//management
#include <iostream>
#include <memory>
using namespace std;

class Demo {
public:
    Demo() {
         cout << "Object created\n"; 
        }
    void show() {
         cout << "Hello from Demo\n";
         }
    ~Demo() {
         cout << "Object destroyed\n"; 
        }
};

int main(){
    unique_ptr<Demo> ptr1 = make_unique<Demo>();
    ptr1->show();

    // shared_ptr: multiple owners
    shared_ptr<Demo> ptr2 = make_shared<Demo>();
    shared_ptr<Demo> ptr3 = ptr2; // shared
    cout << "Use count: " << ptr2.use_count() << endl;

    return 0;
}
