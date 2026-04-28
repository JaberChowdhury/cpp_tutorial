#include <cctype>
#include <iostream>
#include <string>
using namespace std;
#define endl '\n'

void solution();
int  main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
#endif
        solution();
    return 0;
}

void solution() {
    string s;
    getline(cin, s);

    int    count = 0;
    string t     = "";

    for (auto d : s) {
        if (isalpha(d)) {
            t += d;
        } else {
            if (t != "") {
                count++;
                t = "";
            }
        }
    }

    if (t != "") {
        count++;
    }

    cout << count << endl;
}

// need to submit
