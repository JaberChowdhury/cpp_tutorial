#include <iostream>
using namespace std;

int main() {
    int n, m, p, x = 0;
    cin >> n >> m >> p;

    for (int i = m; i <= n; i += p) {
        x++;
    }

    cout << x << endl;
    return 0;
}