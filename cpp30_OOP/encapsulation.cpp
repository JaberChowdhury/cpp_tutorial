#include <iostream>
using namespace std;

// Abstract class
class Shape
{
public:
    // Pure virtual function (makes Shape abstract)
    virtual void draw() = 0; // No implementation
};

// Concrete class
class Circle : public Shape
{
public:
    void draw() override
    {
        cout << "Drawing a Circle" << endl;
    }
};

int main()
{
    Shape *shape = new Circle(); // Abstraction in action
    shape->draw();               // Calls Circle's draw()
    delete shape;
    return 0;
}