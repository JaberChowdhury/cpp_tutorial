#include <iostream>
using namespace std;

int main() {
    int   x  = 10;
    int*  p  = &x; // p points to x
    int** pp = &p; // pp points to p (pointer to pointer)
    int   y  = *p;
    cout << "y :: " << y << endl;
    cout << "x: " << x << endl;
    cout << "p (address of x): " << p << endl;
    cout << "*p (value of x): " << *p << endl;
    cout << "pp (address of p): " << pp << endl;
    cout << "*pp (value of p): " << *pp << endl;
    cout << "**pp (value of x): " << **pp << endl;
}
