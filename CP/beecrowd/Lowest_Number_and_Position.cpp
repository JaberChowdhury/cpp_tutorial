// https://judge.beecrowd.com/en/problems/view/1180
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int smallest = 10000, pos = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x < smallest) {
            smallest = x;
            pos      = i;
        }
    }
    cout << "Menor valor: " << smallest << endl;
    cout << "Posicao: " << pos << endl;
    return 0;
}

// solved
