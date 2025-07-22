// https://judge.beecrowd.com/en/problems/view/1168

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int led_count[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    int n;
    cin >> n;
    vector<int> ans;
    for (int i = 0; i < n; i++) {
        string num;
        cin >> num;
        int total = 0;
        for (int i = 0; i < num.size(); i++) {
            total += led_count[num[i] - 48];
            // cout << "led_count[num[" << i << "] - 48]" << led_count[num[i] - 48] << endl;
        }
        ans.push_back(total);
    }

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " leds" << endl;
    }

    return 0;
}

// solved
