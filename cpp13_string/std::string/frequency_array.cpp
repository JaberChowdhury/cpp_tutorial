#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int frequency[26];
int main() {
    string s;
    cin >> s;

    for (auto c : s) {
        frequency[c - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        if (frequency[i] > 0) {
            cout << char(i + 'a') << ": " << frequency[i] << "\n";
        }
    }
    return 0;
}
