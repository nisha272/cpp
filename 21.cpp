#include <iostream>
#include <cmath> // For M_PI

using namespace std;

// 1. Overloaded function for Circle (1 double parameter)
double calculateArea(double radius) {
    return M_PI * radius * radius;
}

// 2. Overloaded function for Rectangle (2 double parameters)
double calculateArea(double length, double width) {
    return length * width;
}

// 3. Overloaded function for Triangle (2 float parameters)
// Using float types here helps differentiate it from the rectangle version
float calculateArea(float base, float height) {
    return 0.5f * base * height;
}

int main() {
    // Calling Circle version
    cout << "Area of Circle (r=5): " << calculateArea(5.0) << endl;

    // Calling Rectangle version
    cout << "Area of Rectangle (10x5): " << calculateArea(10.0, 5.0) << endl;

    // Calling Triangle version (using 'f' suffix for float literals)
    cout << "Area of Triangle (b=6, h=4): " << calculateArea(6.0f, 4.0f) << endl;

    return 0;
}
