#include <iostream>
#include <map>

using namespace std;

map<char, int> frequency;
int            main() {
    string s;
    cin >> s;

    for (auto d : s) {
        frequency[d]++;
    }
    for (auto d : frequency) {
        cout << d.first << " = " << d.second << endl;
    }

    return 0;
}
