// https://codeforces.com/problemset/problem/155/A
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

void log(int x, int current_big, int current_small, int i) {

    bool shouldLog = false;
    if (shouldLog) {

        cout << "x = " << x << " || i = " << i + 1 << " || current_big = " << current_big
             << " || current_small = " << current_small << endl;
    }
}
void solution() {
    int n;
    cin >> n;

    int current_big = -1, current_small = -1;

    int amaizing = 0;
    int prev_number;
    cin >> prev_number;
    for (int i = 1; i < n; i++) {
        int x;
        cin >> x;

        if ((current_big == -1) && x > prev_number) {
            current_big   = x;
            current_small = prev_number;
            amaizing++;
            log(x, current_big, current_small, i);
        }
        if ((current_small == -1) && x < prev_number) {
            current_small = x;
            current_big   = prev_number;
            amaizing++;
            log(x, current_big, current_small, i);
        }

        if (x == prev_number) {
            continue;
        }

        if (x > current_big) {
            amaizing++;
            prev_number = x;
            current_big = x;
            log(x, current_big, current_small, i);
        } else if (x < current_small) {
            amaizing++;
            prev_number   = x;
            current_small = x;
            log(x, current_big, current_small, i);
        }
    }

    cout << amaizing << endl;
}
