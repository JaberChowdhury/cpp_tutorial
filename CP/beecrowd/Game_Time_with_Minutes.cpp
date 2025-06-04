// https://judge.beecrowd.com/en/problems/view/1047

#include <iostream>
using namespace std;

int main() {
    int start_h, start_m, end_h, end_m, result_h, result_m;
    cin >> start_h >> start_m >> end_h >> end_m;

    if (start_h == start_m && start_m == end_h && end_h == end_m) {
        result_h = 24;
        result_m = 0;
    } else {

        if (start_m > end_m) {
            end_m += 60;
            end_h -= 1;
            result_m = end_m - start_m;
            // } else if (start_m < end_m) {
        } else {
            result_m = end_m - start_m;
        }

        if (start_h > end_h) {
            result_h = (end_h + 24) - start_h;
        } else {
            result_h = end_h - start_h;
        }
    }

    cout << "O JOGO DUROU " << result_h << " HORA(S) E " << result_m << " MINUTO(S)" << endl;
    return 0;
}

// solved
