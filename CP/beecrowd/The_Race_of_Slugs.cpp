// https://judge.beecrowd.com/en/problems/view/1789

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int         l;
    vector<int> result;
    while (cin >> l) {
        int highest = 0;
        for (int i = 0; i < l; i++) {
            int x;
            cin >> x;
            if (x >= 20) {
                highest = 3;
            } else if (x >= 10) {
                if (!(highest > 2))
                    highest = 2;
            } else if (x < 10) {
                if (!(highest > 1))
                    highest = 1;
            }
        }
        result.push_back(highest);
    }

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << endl;
    }
    return 0;
}

// solved
