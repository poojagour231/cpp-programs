// Implement a program that demonstrates the use of multiple catch blocks to handle 
//different types of exceptions. 
#include <iostream>
#include <stdexcept>  // for std::out_of_range
using namespace std;

int main() {
    try {
        int a = 10, b = 0;

        // Throwing int for Arithmetic Exception
        if (b == 0)
            throw 1; // simulating divide-by-zero

        int result = a / b;
        cout << "Result: " << result << endl;

        // Throwing char for array index error
        int arr[3] = {1, 2, 3};
        throw 'a'; // simulating invalid index access

        // Using standard exception
        string str = "abc";
        if (str.at(5)) // This will throw std::out_of_range
            cout << str.at(5) << endl;

    } catch (int e) {
        cout << "Caught an int exception (probably divide by zero): " << e << endl;
    } catch (char e) {
        cout << "Caught a char exception (array index issue): " << e << endl;
    } catch (out_of_range& e) {
        cout << "Caught std::out_of_range exception: " << e.what() << endl;
    } catch (...) {
        cout << "Caught some other exception." << endl;
    }

    cout << "Program continues after handling exceptions." << endl;
    return 0;
}
