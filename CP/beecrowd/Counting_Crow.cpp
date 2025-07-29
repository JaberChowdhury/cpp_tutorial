// https://judge.beecrowd.com/en/problems/view/1848

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int         count = 0;
    vector<int> result;
    while (count < 3) {
        int    sum = 0;
        string s;
        while (getline(cin, s)) {
            if (s == "caw caw") {
                break;
            }
            int value = 0;
            if (s[0] == '*')
                value += 4;
            if (s[1] == '*')
                value += 2;
            if (s[2] == '*')
                value += 1;
            sum += value;
        }
        result.push_back(sum);
        count++;
    }
    for (int i = 0; i < 3; i++) {
        cout << result[i] << endl;
    }
    return 0;
}

// solved
