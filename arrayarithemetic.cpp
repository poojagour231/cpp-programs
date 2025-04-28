#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};  // Array declaration
    int* ptr = arr;  // Pointer to the first element of the array

    cout << "Accessing array elements using pointer arithmetic:\n";

    for (int i = 0; i < 5; i++) {
        cout << "Element " << i << ": " << *(ptr + i) << endl;
    }

    return 0;
}
