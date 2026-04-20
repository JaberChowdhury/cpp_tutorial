#include <cctype>
#include <iostream>
#include <string>
#include <vector>
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

    int  count  = 0;
    bool inWord = false;

    for (char c : s) {
        if (isalpha(c)) {
            if (!inWord) {
                count++;
                inWord = true;
            }
        } else {
            inWord = false;
        }
    }

    cout << count << endl;
}
