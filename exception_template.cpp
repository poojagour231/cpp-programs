//Create a program that uses exception handling and templates to implement a safe array class.
#include <iostream>
#include <stdexcept>
using namespace std;

template <typename T>
class SafeArray {
    T arr[5]; // fixed size for simplicity

public:
    T& get(int index) {
        if (index < 0 || index >= 5)
            throw out_of_range("Index out of range");
        return arr[index];
    }
};

int main() {
    SafeArray<int> a;

    try {
        a.get(0) = 10;
        a.get(1) = 20;
        cout << "a[0] = " << a.get(0) << endl;
        cout << "a[1] = " << a.get(1) << endl;
        cout << "a[5] = " << a.get(5) << endl; // out-of-bounds access
    }
    catch (exception& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
