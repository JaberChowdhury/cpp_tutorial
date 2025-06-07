// https://judge.beecrowd.com/en/problems/view/1050

#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    cout << (num == 61
                 ? "Brasilia"
                 : (num == 71
                        ? "Salvador"
                        : (num == 11
                               ? "Sao Paulo"
                               : (num == 21
                                      ? "Rio de Janeiro"
                                      : (num == 32 ? "Juiz de Fora"
                                                   : (num == 19 ? "Campinas"
                                                                : (num == 27 ? "Vitoria"
                                                                             : (num == 31 ? "Belo Horizonte"
                                                                                          : "DDD nao cadastrado"))))))))
         << endl;
    return 0;
}
