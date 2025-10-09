// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/X
//
//
#include <bitset>
#include <iostream>
using namespace std;
#define endl '\n'

string count_one(bitset<12> a) {
    string count = "";
    for (int i = 0; i < 12; i++) {
        if (a[i] == 1) {
            count += "1";
        }
    }
    return count;
}

void test() {
    int t;
    cin >> t;
    while (t--) {
        int a;
        cin >> a;
        cout << bitset<32>(count_one(a)).to_ulong() << endl;
    }
};

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
        test();
    return 0;
}
