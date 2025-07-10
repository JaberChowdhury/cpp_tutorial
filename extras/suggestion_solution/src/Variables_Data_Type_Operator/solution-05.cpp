#include <iostream>
using namespace std;

int main() {
    // for triangle
    float base, height, result_triangle;
    cout << "Enter base and height for triangle: ";
    cin >> base >> height;
    result_triangle = 0.5 * base * height;

    // for circle
    float radius, result_circle;
    cout << "Enter radius for circle: ";
    cin >> radius;
    result_circle = 3.14159 * radius * radius;

    // for square
    float side, result_square;
    cout << "Enter side for square: ";
    cin >> side;
    result_square = side * side;

    cout << "Triangle Area: " << result_triangle << endl;
    cout << "Circle Area: " << result_circle << endl;
    cout << "Square Area: " << result_square << endl;
    return 0;
}
