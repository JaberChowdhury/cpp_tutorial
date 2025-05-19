// https://codeforces.com/problemset/problem/158/A

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> scores;
    for (int i = 0; i < n; i++) {
        int s;
        cin >> s;
        scores.push_back(s);
    }

    int result = 0, index = 0;

    for (int i = 0; i < n; i++) {
        index++;
        if (scores[i] > 0) {
            //            cout << "got in " << scores[i] << endl;
            result++;
        }
        if (result == k) {
            break;
        }
    }
    for (int i = index; i < n; i++) {
        if (scores[i] > 0) {
            if (scores[i] == scores[i - 1]) {
                //              cout << "got in " << scores[i] << endl;
                result++;
            } else {
                break;
            }
        }
    }
    cout << result << endl;

    return 0;
}
