// https://codeforces.com/problemset/problem/131/A
//
//
//
//
//
#include <bits/stdc++.h>
#include <cctype>

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

string alterTheCHar(string s) {
    for (int i = 0; i < s.length(); i++) {
        if (isupper(s[i])) {
            s[i] = tolower(s[i]);
        } else if (islower(s[i])) {
            s[i] = toupper(s[i]);
        }
    }
    return s;
}

bool isAllCharUpper(string s) {
    bool result = true;
    int  sum = 0, ptr = 0;
    for (int i = 1; i < s.size(); i++) {

        if (isupper(s[i])) {
            sum++;
        }
        ptr++;
    }

    // cout << "sum = " << sum << " ||| ptr = " << ptr << endl;

    if (sum / ptr == 1) {
        result = true;
    } else {
        result = false;
    }

    return result;
}

void solution() {

    string s;
    cin >> s;

    if (s.size() == 1) {
        cout << alterTheCHar(s) << endl;
        return;
    }

    bool firstCharIsUpper = isupper(s[0]);

    if (firstCharIsUpper) {
        if (isAllCharUpper(s)) {
            cout << alterTheCHar(s) << endl;
        } else {
            cout << s << endl;
        }
    } else {
        if (isAllCharUpper(s)) {
            cout << alterTheCHar(s) << endl;
        } else {
            cout << s << endl;
        }
    }
}
