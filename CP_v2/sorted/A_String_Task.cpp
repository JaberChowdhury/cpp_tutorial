// https://codeforces.com/problemset/problem/118/A
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
bool isVowel(char c) {
    string vowel  = "aeiouyAEIOUY";
    bool   result = false;
    for (auto d : vowel) {
        if (c == d) {
            result = true;
            break;
        }
    }
    return result;
}
void solution() {

    string s, ns = "";
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        bool vow = isVowel(s[i]);
        if (vow) {
            ns += "";
        } else if (!vow) {
            ns += ".";
            if ((int) s[i] >= 65 && (int) s[i] <= 90) {
                ns += static_cast<char>((int) s[i] + 32);
            } else {
                ns += s[i];
            }
        }
    }

    cout << ns << endl;
}
