// https: // codeforces.com/group/MWSDmqGsZm/contest/219158/problem/U

#include <iostream>
using namespace std;

int main() {
    string x, fp = "", lp = "";
    cin >> x;

    int dp = 0;
    for (int i = 0; i < x.size(); i++) {
        if (x[i] != '.') {
            fp += x[i];
        } else {
            dp = i;
            break;
        }
    }

    bool isFloat = false;

    for (int i = dp + 1; i < x.size(); i++) {
        if (x[i] != '0') {
            isFloat = true;
            break;
        }
    }

    for (int i = dp + 1; i < x.size(); i++) {
        lp += x[i];
        if (x[i] != '0') {
            isFloat = true;
        }
    }

    x  = lp;
    lp = x[0];

    if (x[x.size() - 1] == '0') {
        for (int i = 1; i < x.size() - 1; i++) {
            lp += x[i];
        }
    } else {
        lp = x;
    }

    if (isFloat) {
        cout << "float " << fp << " 0." << lp << endl;
    } else {
        cout << "int " << fp << endl;
    }

    // cout << "fp :: "<< fp << endl; cout << "lp :: "<< lp << endl;

    return 0;
}

// solved