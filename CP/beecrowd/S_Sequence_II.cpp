// https://judge.beecrowd.com/en/problems/view/1156

#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    float            s     = 0;
    vector<int>      numx  = {1};
    vector<long int> numy  = {1};
    int              limit = (39 / 2) + 2;
    for (int i = 1; i < limit; i++) {
        numx.push_back(numx[i - 1] + 2);
        numy.push_back(numy[i - 1] * 2);
        // cout << numx[i - 1] << "/" << numy[i - 1] << endl;
        // cout << i - 1 << endl;
        // cout << "numx[" << i - 1 << "] = " << numx[i - 1] << endl;
        // cout << "numy[" << i - 1 << "] = " << numy[i - 1] << endl;
        s += (float) numx[i - 1] / numy[i - 1];
    }
    cout << fixed << setprecision(2) << s << endl;
    return 0;
}

// solved
