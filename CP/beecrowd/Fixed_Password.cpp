// https://judge.beecrowd.com/en/problems/view/1114

#include <iostream>
using namespace std;

int main() {
    while (true) {
        int x;
        cin >> x;
        if (x == 2002) {
            cout << "Acesso Permitido" << endl;
            break;
        } else {
            cout << "Senha Invalida" << endl;
        }
    }
    return 0;
}

// solved
