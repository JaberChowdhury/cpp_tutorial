// https: // codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Y

#include <cstdint>
#include <iostream>
#include <string>
using namespace std;

int main() {
    long long int a, b, c, d, result = 1;
    cin >> a >> b >> c >> d;
    result = (result * a) % 100;
    result = (result * b) % 100;
    result = (result * c) % 100;
    result = (result * d) % 100;

    if (result < 10)
        cout << "0" << result << endl; // leading zero handle
    else
        cout << result << endl;
    return 0;
}

// solved