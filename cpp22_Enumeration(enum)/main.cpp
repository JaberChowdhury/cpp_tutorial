#include <iostream>
using namespace std;

enum Color
{
    RED,
    GREEN,
    BLUE
};

int main()
{
    Color myColor = GREEN;

    if (myColor == GREEN)
    {
        cout << "The color is GREEN" << endl;
    }

    return 0;
}
