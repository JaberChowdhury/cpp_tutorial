// https://codeforces.com/problemset/problem/4/C
//
//
//
//
#include <bits/stdc++.h>
#include <string>
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
    ll t;
    cin >> t;
    while (t--)
#endif
        solution();
    return 0;
}
bool isExist(const string& s, string arr[], int n, int& exist_pos) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == s) {
            exist_pos = i;
            return true;
        }
    }
    return false;
}

void solution() {
    ll n;
    cin >> n;
    string arr[n];
    int    count[n]; // to store how many times each base name appeared
    for (int i = 0; i < n; i++)
        count[i] = 0;

    int current_size = 0;

    for (ll i = 0; i < n; i++) {
        string s;
        cin >> s;

        int exist_pos = -1;
        if (isExist(s, arr, current_size, exist_pos)) {
            count[exist_pos]++;
            cout << s << count[exist_pos] << endl;
        } else {
            arr[current_size]   = s;
            count[current_size] = 0;
            current_size++;
            cout << "OK" << endl;
        }
    }
}
