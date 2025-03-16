// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/C

#include <iostream>
using namespace std;

int main()
{
    long long x, y, a, b, c;
    cin >> x >> y;
    a = x + y;
    b = x * y;
    c = x - y;
    cout << x << " + " << y << " = " << a << endl;
    cout << x << " * " << y << " = " << b << endl;
    cout << x << " - " << y << " = " << c << endl;
    return 0;
}