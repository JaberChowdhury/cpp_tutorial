#include <iostream>
#include <utility>
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

string reverse_str(string s) {
    int    n    = s.size();
    string temp = s;
    for (int i = 0; i < n / 2; i++) {

        swap(temp[i], temp[n - 1 - i]);
    }
    return temp;
}

void solution() {

    vector<string> words;
    string         word;
    while (cin >> word) {
        words.push_back(word);
    }
    for (int i = 0; i < words.size(); i++) {

        cout << reverse_str(words[i]);
        if (i < words.size() - 1) {
            cout << " ";
        }
    }
    cout << endl;
}
