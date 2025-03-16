// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/J

#include <iostream>
using namespace std;

int main()
{
    long long a, b;
    cin >> a >> b;
    if ((a * a) == b || (b * b) == a)
    {
        cout << "Multiples" << endl;
    }
    else
    {
        cout << "No Multiples" << endl;
    }
    return 0;
}