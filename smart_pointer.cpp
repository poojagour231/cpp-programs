//Write a program that uses smart pointers and templates to implement a memory-efficient 
//and type-safe container
#include <iostream>
#include <memory>
using namespace std;

template <typename T>
class SmartBox {
    unique_ptr<T> data;
public:
    SmartBox(T value) {
        data = make_unique<T>(value);
    }

    void show() {
        cout << "Value: " << *data << endl;
    }
};

int main() {
    SmartBox<int> box1(100);
    box1.show();  // Output: Value: 100

    SmartBox<string> box2("Hello");
    box2.show();  // Output: Value: Hello

    return 0;
}
