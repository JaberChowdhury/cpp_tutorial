// https://judge.beecrowd.com/en/problems/view/1478

#include <iomanip>
#include <iostream>
using namespace std;

void print_the_matrix(int n) {
    int j_start = 1;
    int limit   = n;

    for (int i = 0; i < n; i++) {
        bool first = true;

        for (int j = j_start; j >= 1; j--) {
            if (!first)
                cout << " ";
            cout << setw(3) << j;
            first = false;
        }
        j_start++;

        for (int j = 2; j <= limit; j++) {
            cout << " " << setw(3) << j;
        }
        limit--;

        cout << endl;
    }
}

int main() {
    int N;
    while (cin >> N && N != 0) {
        print_the_matrix(N);
        cout << endl;
    }

    return 0;
}

// solved
