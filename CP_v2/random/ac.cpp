//
//
//
//
//
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solution(); // solutioin func
int  main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    // freopen("error.txt", "w", stderr);
    int t;
    cin >> t;
    while (t--)
#endif
        solution();
    return 0;
}

void solution() {
    int N;
    while (cin >> N && N != 0) {
        vector<int> transactions(N);
        for (int i = 0; i < N; ++i) {
            cin >> transactions[i];
        }

        int d = 0;
        int w = 0;

        for (int x : transactions) {
            if (x > 0) {
                d = max(d, x);
            } else if (x < 0) {
                w = min(w, x);
            }
        }

        int r               = 0;
        int current_balance = 0;

        unordered_map<int, int> balance_to_first_index;

        balance_to_first_index[0] = -1;

        for (int i = 0; i < N; ++i) {
            if (transactions[i] > 0) {
                current_balance++;
            } else if (transactions[i] < 0) {
                current_balance--;
            }
            if (balance_to_first_index.count(current_balance)) {
                int first_index = balance_to_first_index[current_balance];
                int length      = i - first_index;
                r               = max(r, length);
            } else {
                balance_to_first_index[current_balance] = i;
            }
        }

        cout << d << " " << w << " " << r << "\n";
    }
}









