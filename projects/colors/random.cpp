#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    srand(time(0));
    // cout << (rand() % 11) + 5 << endl;

    int n = 6, m = 6, min = 5, max = 10;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            int random_number = (rand() % (max + 1));
            if (random_number >= min) {
                cout << setw(4) << random_number << " ";
            } else {
                cout << setw(4) << random_number + min << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
