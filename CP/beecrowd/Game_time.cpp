// https://judge.beecrowd.com/en/problems/view/1046

#include <iostream>
using namespace std;

int main() {
    int start, end, total;
    cin >> start >> end;

    if (start > end) {
        total = (24 - start) + end;
    } else if (start == end) {
        total = 24;
    } else if (end > start) {
        total = end - start;
    }

    cout << "O JOGO DUROU " << total << " HORA(S)" << endl;
    return 0;
}

// solved
