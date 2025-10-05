// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/G

#include <algorithm>
#include <iostream>
using namespace std;
#define endl '\n'
void test() {

    long long n, m, k; // eyes, mouths, bodies
    cin >> n >> m >> k;

    long long total = 0;

    // Step 1: Use as many of type 3: 1 eye + 1 mouth + 1 body
    long long type3 = min({n, m, k});
    n -= type3;
    m -= type3;
    k -= type3;
    total += type3;

    // Step 2: Use as many of type 2: 2 eyes + 1 mouth + 1 body
    long long type2 = min({n / 2, m, k});
    n -= type2 * 2;
    m -= type2;
    k -= type2;
    total += type2;

    // Step 3: Use as many of type 1: 2 eyes + 1 body
    long long type1 = min(n / 2, k);
    n -= type1 * 2;
    k -= type1;
    total += type1;

    cout << total << endl;
};

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
// freopen("error.txt", "w", stderr);
#endif

    int t;
    cin >> t;
    while (t--)
        test();
    return 0;
}

// SOLVED
