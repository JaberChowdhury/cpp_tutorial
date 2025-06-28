// https://judge.beecrowd.com/en/problems/view/1134

#include <iostream>
using namespace std;

int main() {
    int Alcool = 0, Gasolina = 0, Diesel = 0;

    int a;
    do {
        cin >> a;
        if (a == 1) {
            Alcool++;
        } else if (a == 2) {
            Gasolina++;
        } else if (a == 3) {
            Diesel++;
        }

    } while (a >= 0 && a < 4 || a != 4);

    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << Alcool << endl;
    cout << "Gasolina: " << Gasolina << endl;
    cout << "Diesel: " << Diesel << endl;
    return 0;
}

// solved
