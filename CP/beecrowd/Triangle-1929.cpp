// https://judge.beecrowd.com/en/problems/view/1929

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<long long> v(4);
    for (int i = 0; i < 4; i++) {
        if (!(cin >> v[i]))
            return 0;
    }
    sort(v.begin(), v.end());
    long long sum_three = v[0] + v[1] + v[2];
    if (v[3] < sum_three)
        cout << "S\n";
    else
        cout << "N\n";
    return 0;
}

// solved
