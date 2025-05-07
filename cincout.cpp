#include <iostream>
using namespace std;

int main() {
    string name;
    int age;

    // Input from the user
    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;

    // Output to the user
    cout << "Hello, " << name << "! You are " << age << " years old." << endl;

    return 0;
}
