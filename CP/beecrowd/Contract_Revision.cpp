// https://judge.beecrowd.com/en/problems/view/1120

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    char           x;
    string         y, answer = "";
    vector<string> results;
    while (true) {
        cin >> x >> y;
        if (x != '0' && y != "0") {
            for (int i = 0; i < y.size(); i++) {
                if (y[i] != x) {
                    answer += y[i];
                }
            }
            if (stoi(answer) == 0) {
                results.push_back("0");
            } else {
                results.push_back(answer);
            }
            answer = "";
        } else {
            break;
        }
    }
    cout << "\n\n\n\n\n\n\n answers" << endl;
    for (int i = 0; i < results.size(); i++) {
        cout << results[i] << endl;
    }
    return 0;
}
