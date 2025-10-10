#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int T;
    cin >> T;
    while (T--) {
        int n, s;
        cin >> n >> s;

        // Max possible sum
        long long max_sum = n * (n + 1) / 2;

        if (s > max_sum) {
            cout << -1 << endl;
            continue;
        }

        vector<int> result;
        for (int i = n; i >= 1; i--) {
            if (s >= i) {
                result.push_back(i);
                s -= i;
            }
            if (s == 0)
                break;
        }

        if (s != 0)
            cout << -1 << endl;
        else {
            for (auto x : result)
                cout << x << " ";
            cout << endl;
        }
    }
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}

// fk
