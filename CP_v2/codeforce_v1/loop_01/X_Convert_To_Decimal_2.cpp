// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/X
//
//
#include <bitset>
#include <iostream>
using namespace std;
#define endl '\n'

void sol();
int  main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t;
    cin >> t;
    while (t--)
#endif
        sol();
    return 0;
}

void sol() {
    int n;
    cin >> n;

    while (n--) {
        int x;
        cin >> x;
        string bits = bitset<64>(x).to_string(), only_one = "";

        for (int i = 0; i < bits.size(); i++) {
            if (bits[i] == '1') {
                only_one += '1';
            }
        }

        unsigned long final = bitset<64>(only_one).to_ullong();
        cout << final << endl;
    }
}
