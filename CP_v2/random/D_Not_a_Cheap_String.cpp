#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        string    w;
        long long p;
        cin >> w >> p;

        long long total = 0;
        for (char c : w)
            total += (c - 'a' + 1);

        if (total <= p) {
            cout << w << "\n";
            continue;
        }

        int cnt[26]    = {0};
        int remove[26] = {0};

        for (char c : w)
            cnt[c - 'a']++;

        for (int v = 25; v >= 0 && total > p; v--) {
            int cost  = v + 1;
            int take  = min<long long>(cnt[v], (total - p + cost - 1) / cost);
            remove[v] = take;
            total -= 1LL * take * cost;
        }

        string result;
        result.reserve(w.size());

        for (char c : w) {
            int idx = c - 'a';
            if (remove[idx] > 0) {
                remove[idx]--;
            } else {
                result += c;
            }
        }

        cout << result << "\n";
    }
}
