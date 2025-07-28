// https://judge.beecrowd.com/en/problems/view/1828

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        string x, y;
        cin >> x >> y;

        if (x == y) {
            cout << "Caso #" << i + 1 << ": De novo!" << endl;
        } else {
            if ((x == "tesoura" && (y == "papel" || y == "lagarto")) || (x == "papel" && (y == "pedra" || y == "Spock"))
                || (x == "pedra" && (y == "lagarto" || y == "tesoura"))
                || (x == "lagarto" && (y == "Spock" || y == "papel"))
                || (x == "Spock" && (y == "tesoura" || y == "pedra"))) {
                cout << "Caso #" << i + 1 << ": Bazinga!" << endl;
            } else {
                cout << "Caso #" << i + 1 << ": Raj trapaceou!" << endl;
            }
        }
    }
    return 0;
}

// solved
