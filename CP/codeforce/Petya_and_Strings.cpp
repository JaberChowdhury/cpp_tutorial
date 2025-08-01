// https://codeforces.com/problemset/problem/112/A

#include <iostream>
#include <string>
using namespace std;

void convert_to_lowercase(string& d) {
    string temp = "";
    for (int i = 0; i < d.size(); i++) {
        int x = d[i];
        if (x < 97 && x > 112) {
            x += 32;
            char y = x;
            temp += y;
        }
    }
    d = temp;
}

int str_int_sum(string ntbs) {
    convert_to_lowercase(ntbs);
    int sum = 0;
    for (int i = 0; i < ntbs.size(); i++) {
        int ccs = ntbs[i];
        sum += ccs;
    }
    return sum;
}

int main() {
    string str1 = "abcdefg", str2 = "AbCdEfF";
    // cin >> str1;
    // cin >> str2;
    int result = 0;

    int s1 = str_int_sum(str1);
    int s2 = str_int_sum(str2);

    cout << (s1 < s2 ? -1 : s1 > s2 ? 1 : 0) << endl;

    return 0;
}

// not solved yts
