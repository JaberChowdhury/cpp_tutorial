// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/N
//
//
//
//
#include <iostream>
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
    int t;
    cin >> t;
    while (t--)
#endif
        solution();
    return 0;
}

bool check_pos(string s, int a) {
    // cout << "pos is true " << s[a] << endl;
    if (s[a] == '-') {
        return true;
    } else {
        return false;
    }
}

bool onlunumber(string s, int a) {
    
    for()
    
}

void solution() {

    int a, b;
    cin >> a >> b;
    string s;
    cin >> s;

    // for (auto d : s) {
    //     cout << d << endl;
    // }

    if (check_pos(s, a) && s.size() == (a + b + 1)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
