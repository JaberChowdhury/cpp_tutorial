// https://judge.beecrowd.com/en/problems/view/1074

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> messages;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x != 0) {
            if (x > 0 && x % 2 == 0) {
                messages.push_back("EVEN POSITIVE");
            } else if (x < 0 && x % 2 == 0) {
                messages.push_back("EVEN NEGATIVE");
            } else if (x > 0 && x % 2 != 0) {
                messages.push_back("ODD POSITIVE");
            } else if (x < 0 && x % 2 != 0) {
                messages.push_back("ODD NEGATIVE");
            }
        } else {
            messages.push_back("NULL");
        }
    }

    for (int i = 0; i < messages.size(); i++) {
        cout << messages[i] << endl;
    }

    return 0;
}

// solved
