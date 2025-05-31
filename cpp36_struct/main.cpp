#include <iostream>
using namespace std;
struct Position {
    int  x = 90;
    int  y = 78;
    int  z = 67;
    void print() { cout << "x = " << x << "; y = " << y << "; z = " << z << endl; }
};
int main() {
    Position p1;
    p1.x += 89;
    p1.print();

    Position p2 = {23, 34, 45};
    p2.print();
    return 0;
}
