// https://judge.beecrowd.com/en/problems/view/1061

#include <iostream>
using namespace std;

int main() {
    int sd, ed, sh, sm, ss, eh, em, es, st, et, duration;
    scanf_s("Dia %d", &sd);
    scanf_s("%d : %d : %d", &sh, &sm, &ss);
    scanf_s("Dia %d", &ed);
    scanf_s("%d : %d : %d", &eh, &em, &es);
    st       = (sd * 24 * 60 * 60 * 60) + (sh * 60 * 60 * 60) + (sm * 60 * 60) + (ss * 60);
    et       = (ed * 24 * 60 * 60 * 60) + (eh * 60 * 60 * 60) + (em * 60 * 60) + (es * 60);
    duration = et - st;
    cout << "duration : " << duration << endl;
    return 0;
}

// not solved
