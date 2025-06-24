// https://judge.beecrowd.com/en/problems/view/1113
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> result;
    while (true) {
        int x, y;
        cin >> x >> y;
        if (x == y) {
            break;
        }
        if (x > y) {
            result.push_back(0);
        } else {
            result.push_back(1);
        }
    }
    string msg[] = {"Decrescente", "Crescente"};
    for (int i = 0; i < result.size(); i++) {
        cout << msg[result[i]] << endl;
    }
    return 0;
}

// solved
