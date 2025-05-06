// Write a program to illustrate the concept of function pointers and callback functions.
#include <iostream>
using namespace std;
void sayHello() {
    cout << "Hello from callback!\n";
}
void callFunction(void (*func)()) {
    func();  
}
int main() {
    callFunction(sayHello);
    return 0;
}
