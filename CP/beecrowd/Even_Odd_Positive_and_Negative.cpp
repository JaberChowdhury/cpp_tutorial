// https://judge.beecrowd.com/en/problems/view/1066

#include <iostream>
using namespace std;

int main() {
    int even = 0, odd = 0, positive = 0, negative = 0;
    for (int i = 0; i < 5; i++) {
        int x;
        cin >> x;
        if (x % 2 == 0) {
            even += 1;
        } else {
            odd += 1;
        }
        if (x > 0) {
            positive += 1;
        } else if (x < 0) {
            negative += 1;
        }
    }

    cout << even << " valor(es) par(es)" << endl;
    cout << odd << " valor(es) impar(es)" << endl;
    cout << positive << " valor(es) positivo(s)" << endl;
    cout << negative << " valor(es) negativo(s)" << endl;
    return 0;
}

// solved
