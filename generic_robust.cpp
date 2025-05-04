//Write a program that uses class templates and exception handling to implement a generic 
//and robust data structure.
#include <iostream>
using namespace std;

template <class T>
class Stack {
    T arr[10];
    int top = -1;

public:
    void push(T val) {
        if (top >= 9)
            throw "Stack Overflow";
        arr[++top] = val;
    }

    T pop() {
        if (top == -1)
            throw "Stack Underflow";
        return arr[top--];
    }
};

int main() {
    Stack<int> s;

    try {
        s.push(5);
        s.push(10);
        cout << "Popped: " << s.pop() << endl;
        cout << "Popped: " << s.pop() << endl;
        cout << "Popped: " << s.pop() << endl; // will throw
    } catch (const char* msg) {
        cout << "Error: " << msg << endl;
    }

    return 0;
}
