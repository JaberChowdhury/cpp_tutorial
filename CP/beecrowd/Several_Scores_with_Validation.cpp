// https://judge.beecrowd.com/en/problems/view/1118

#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    double n, a, b;
    int    option;

    while (true) {
        int    count = 0;
        double sum   = 0;

        while (count < 2) {
            cin >> n;
            if (n >= 0.0 && n <= 10.0) {
                sum += n;
                count++;
            } else {
                cout << "nota invalida" << endl;
            }
        }

        cout << fixed << setprecision(2);
        cout << "media = " << sum / 2.0 << endl;

        do {
            cout << "novo calculo (1-sim 2-nao)" << endl;
            cin >> option;
        } while (option != 1 && option != 2);

        if (option == 2)
            break;
    }

    return 0;
}

// solved
