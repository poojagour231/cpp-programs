
#include <iostream>
using namespace std;

class Box {
private:
    float length, breadth, height;

public:
    // Constructor to initialize box dimensions
    Box(float l = 0, float b = 0, float h = 0) {
        length = l;
        breadth = b;
        height = h;
    }

    // Friend function declaration
    friend float calculateVolume(Box b1, Box b2);
};

// Friend function definition
float calculateVolume(Box b1, Box b2) {
    float volume1 = b1.length * b1.breadth * b1.height;
    float volume2 = b2.length * b2.breadth * b2.height;
    return volume1 + volume2;
    

    
}

// Main function to test the class
int main() {
    Box box1(2.5, 3.0, 4.5);
    Box box2(1.5, 2.0, 3.5);
    float totalVolume = calculateVolume(box1, box2);

    cout << "Total Volume of two boxes: " << totalVolume << endl;

    



    
    return 0;
}

    

