
#include <iostream>
#include <string>
using namespace std;
#define endl '\n'

bool isok(int a, int b, int x) {
    int    xys = 0;
    string as  = to_string(x);
    // cout << "as :: " << as << endl;
    for (int j = 0; j < as.size(); j++) {
        int h = as[j] - '0';
        // cout << h << " ";
        xys += h;
    }
    if (xys >= a && xys <= b) {
        return true;
    } else {
        return false;
    }
}
void test() {
    int n, a, b, sum = 0;
    cin >> n >> a >> b;

    for (int i = 1; i <= n; i++) {

        // cout << xys << "/";
        if (isok(a, b, i)) {
            sum += i;
        }
    }

    cout << sum << endl;
};

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    // freopen("error.txt", "w", stderr);
#endif

    int t;
    cin >> t;
    while (t--)
        test();
    return 0;
}
