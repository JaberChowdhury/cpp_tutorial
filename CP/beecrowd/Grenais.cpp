// https://judge.beecrowd.com/en/problems/view/1131

#include <iostream>
using namespace std;

int main() {
    int Inter = 0, Gremio = 0, Empates = 0, grenais = 0;
    while (true) {
        int x, y;
        cin >> x >> y;

        if (x > y) {
            Inter++;
        } else if (x < y) {
            Gremio++;
        } else {
            Empates++;
        }
        grenais++;

        int a;
        do {
            cout << "Novo grenal (1-sim 2-nao)" << endl;
            cin >> a;
            // cout << "a = " << a << endl;
        } while (a != 1 && a != 2);
        if (a == 2) {
            break;
        }
    }
    cout << grenais << " grenais" << endl;
    cout << "Inter:" << Inter << endl;
    cout << "Gremio:" << Gremio << endl;
    cout << "Empates:" << Empates << endl;
    if (Inter > Gremio) {
        cout << "Inter venceu mais" << endl;
    } else if (Inter < Gremio) {
        cout << "Gremio venceu mais" << endl;
    } else {
        cout << "Não houve vencedor" << endl;
    }
    return 0;
}

// solved
