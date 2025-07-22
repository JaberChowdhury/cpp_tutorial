// https://judge.beecrowd.com/en/problems/view/1179

#include <iostream>
#include <vector>
using namespace std;
void print_vector(vector<int>& vc, string title) {
    for (int i = 0; i < vc.size(); i++) {
        cout << title << "[" << i << "] = " << vc[i] << endl;
    }
}
int main() {
    vector<int> par;
    vector<int> impar;
    for (int i = 0; i < 15; i++) {
        int x;
        cin >> x;
        if (x % 2 == 0) {
            par.push_back(x);
            if (par.size() == 5) {
                print_vector(par, "par");
                par.clear();
            }
        } else {
            impar.push_back(x);
            if (impar.size() == 5) {
                print_vector(impar, "impar");
                impar.clear();
            }
        }
    }
    print_vector(impar, "impar");
    print_vector(par, "par");
    return 0;
}

// need to submit leter
