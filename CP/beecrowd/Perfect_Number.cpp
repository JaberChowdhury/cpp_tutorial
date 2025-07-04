// https://judge.beecrowd.com/en/problems/view/1164
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int t, sum = 0;
    cin >> t;
    vector<string> answers;

    for (int i = 0; i < t; i++) {
        int x;
        cin >> x;
        for (int j = 1; j < x; j++) {
            if (x % j == 0) {
                sum += j;
            }
        }
        // cout << "sum = " << sum << endl;
        if (sum == x) {
            answers.push_back(to_string(x) + " eh perfeito");
        } else {
            answers.push_back(to_string(x) + " nao eh perfeito");
        }
        sum = 0;
    }

    // print answers
    for (const auto& answer : answers) {
        cout << answer << endl;
    }
    return 0;
}
