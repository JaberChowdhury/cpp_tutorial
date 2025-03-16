// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/E

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double i, o, pi = 3.141592653;
    cin >> i;
    o = pi * (i * i);
    cout << fixed << setprecision(9) << o << endl;
    return 0;
}