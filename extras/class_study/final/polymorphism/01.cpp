/*
 Circle Class with Area and Circumference

 Write a C++ program to implement a class called Circle that has
 private member variables for radius. Include member functions to
 calculate the circle's area and circumference.
 */

#include <iostream>
using namespace std;

class Circle {
  private:
    int radius;

  public:
    void take_input() {
        cout << "Enter circle radius :: ";
        cin >> radius;
    }
    void area() { cout << "Area :: " << 3.1416 * radius * radius << endl; }
    void circumference() { cout << "Circumference :: " << 2 * 3.1416 * radius << endl; }
};
int main() {
    Circle c;

    c.take_input();
    c.area();
    c.circumference();
    return 0;
}
