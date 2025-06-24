// https://judge.beecrowd.com/en/problems/view/1094

#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int t, c = 0, r = 0, s = 0, total = 0;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int  x;
        char y;
        cin >> x;
        cin >> y;

        if (y == 'C') {
            c += x;
        } else if (y == 'S') {
            s += x;
        } else if (y == 'R') {
            r += x;
        }
        total += x;
    }

    cout << "Total: " << total << " cobaias" << endl;
    cout << "Total de coelhos: " << c << endl;
    cout << "Total de ratos: " << r << endl;
    cout << "Total de sapos: " << s << endl;
    cout << "Percentual de coelhos: " << fixed << setprecision(2) << ((float) ((float) c / total) * 100) << " %"
         << endl;
    cout << "Percentual de ratos: " << fixed << setprecision(2) << ((float) ((float) r / total) * 100) << " %" << endl;
    cout << "Percentual de sapos: " << fixed << setprecision(2) << ((float) ((float) s / total) * 100) << " %" << endl;
    return 0;
}

// solved
