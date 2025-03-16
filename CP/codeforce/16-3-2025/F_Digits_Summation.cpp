// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/F

#include <iostream>
using namespace std;

int main()
{
    long long a, b, s;
    cin >> a >> b;
    s = (a % 10) + (b % 10);
    cout << s << endl;
    return 0;
}