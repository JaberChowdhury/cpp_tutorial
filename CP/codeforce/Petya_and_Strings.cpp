// https://codeforces.com/problemset/problem/112/A

#include <iostream>
#include <string>
using namespace std;

string convert_to_lowercase(string d) {
    string temp = "";
    for (int i = 0; i < d.size(); i++) {
        int x = d[i];
        if (x >= 65 && x <= 90) {
            x += 32;
            char y = x;
            temp += y;
        } else {
            temp += d[i];
        }
    }
    return temp;
    // done
}
// int sum_ansi(string d) {
//     int s = 0;
//     for (int i = 0; i < d.size(); i++) {
//         int x = d[i];
//         cout << "d :: " << d[i] << "  x :: " << x << endl;
//         s += x;
//     }
//     return s;
//     // done
// }
int main() {
    string str1, str2;
    cin >> str1;
    cin >> str2;

    str1      = convert_to_lowercase(str1);
    str2      = convert_to_lowercase(str2);
    bool iseq = true;
    for (int i = 0; i < str1.size(); i++) {
        int x = str1[i], y = str2[i];
        if (x != y) {
            if (x > y) {
                iseq = false;
                cout << 1 << endl;
                break;
            } else {
                iseq = false;
                cout << -1 << endl;
                break;
            }
        }
    }
    iseq&& cout << 0 << endl;
    return 0;
}

// solved
