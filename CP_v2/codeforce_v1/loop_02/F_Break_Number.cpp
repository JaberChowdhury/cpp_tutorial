
#include <cstdint>
#include <cstdio>
#include <functional>
#include <iostream>
#include <set>
using namespace std;

#define endl '\n'
#define ll long long
#define in int64_t

int find_bs(in x) {
    int s = 0;
    while (true) {
        if (x % 2 != 0) {
            break;
        }
        x /= 2;
        s++;
    }
    // cout << "s : " << s << endl;
    return s;
}
void test() {
    in t;
    cin >> t;

    set<int, greater<>> total_bs;
    while (t--) {
        in x;
        cin >> x;
        int s = find_bs(x);
        total_bs.insert(s);
    }

    for (auto d : total_bs) {
        cout << d << endl;
        break;
    }
}

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
