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

void test() {
    int n, m;
    cin >> n >> m;

    vector<int> ns(n), ms(m);

    for (int i = 0; i < n; i++) {
        cin >> ns[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> ms[i];
    }
    sort(ns.begin(), ns.end());
    sort(ms.begin(), ms.end());

    // for (auto d : ns) {
    //     cout << d << " ";
    // }
    // cout << endl;
    // for (auto d : ms) {
    //     cout << d << " ";
    // }
    // cout << endl;
    if (n > m) {
        // cout << "1st" << endl;
        cout << "No" << endl;
        // cout << "m = " << m << " || n = " << n << endl;
        return;
    } else if (ns[0] < ms[0]) {
        // cout << "2nd" << endl;
        cout << "No" << endl;
        return;
    } else {
        bool isdone = true;
        for (int i = 0; i < n; i++) {
            if (ns[i] <= ms[i]) {
                isdone = false;
                break;
            }
        }
        if (isdone) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
        //     int done = 0;
        //     for (int i = 0; i < n; i++) {
        //         for (int j = i; j < m; j++) {
        //             if (ns[i] < ms[j]) {
        //                 done++;
        //                 break;
        //             }
        //         }
        //     }
        //     if (done == n) {
        //         cout << "3rd" << endl;
        //         cout << "Yes" << endl;
        //     } else {
        //         cout << "4th" << endl;
        //         cout << "No" << endl;
        //     }
        //     cout << "done = " << done << endl;
    }
}
void solution() {

    int t;
    cin >> t;
    while (t--) {
        test();
    }
}
