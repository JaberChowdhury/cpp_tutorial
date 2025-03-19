#include <iostream>
using namespace std;

int main()
{
    // pre increment
    int x = 20;
    int y = ++x;
    cout << "x = " << x << endl; // 21
    cout << "y = " << y << endl; // 21
    // post increment
    int a = 10;
    int b = a++;
    cout << "a = " << a << endl; // 11
    cout << "b = " << b << endl; // 10
    return 0;
}