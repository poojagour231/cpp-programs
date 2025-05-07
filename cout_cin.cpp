// Write a program to perform basic input and output using streams (cin and cout).
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter a: " << endl;
    cin >> a;
    cout << "Enter b: " << endl;
    cin >> b;
    int c = a + b;
    cout << "Addition of two number is: " << c << endl;
    return 0;
}