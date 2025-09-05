/*
Rectangle Class with Area and Perimeter

Write a C++ program to create a class called Rectangle that has
private member variables for length and width. Implement member
functions to calculate the rectangle's area and perimeter.
*/

#include <iostream>
using namespace std;

class Rectangle {
  private:
    float width, length;

  public:
    void take_input() {
        cout << "Please enter width :: ";
        cin >> width;
        cout << "Please enter length :: ";
        cin >> length;
    }
    void area() { cout << "Area :: " << width * length << endl; }
    void perimeter() { cout << "Perimeter :: " << 2 * (width + length) << endl; }
};
int main() {
    Rectangle r;
    r.take_input();

    r.area();
    r.perimeter();
    return 0;
}
