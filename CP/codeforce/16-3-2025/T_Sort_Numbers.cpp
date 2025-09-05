// https: // codeforces.com/group/MWSDmqGsZm/contest/219158/problem/T

#include <iostream>
#include <set>
using namespace std;

int main() {
    long long int           x, y, z;
    multiset<long long int> d;
    cin >> x >> y >> z;
    d.insert(x);
    d.insert(y);
    d.insert(z);

    // sorted
    for (auto a : d) {
        cout << a << endl;
    }
    cout << endl;
    // default
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;
    return 0;
}

// solved