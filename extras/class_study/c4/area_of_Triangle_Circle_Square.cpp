#include <iostream>
using namespace std;

int main() {
    // tirangle values
    int base = 90, height = 10;
    int area = (base * height) / 2;
    cout << "Area of Triangle: " << area << endl;

    // circle values
    int    radius      = 5;
    double pi          = 3.14159;
    double circle_area = pi * radius * radius;
    cout << "Area of Circle: " << circle_area << endl;

    // square values
    int side        = 10;
    int square_area = side * side;
    cout << "Area of Square: " << square_area << endl;

    return 0;
}
