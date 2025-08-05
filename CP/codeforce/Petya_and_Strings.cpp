// https://codeforces.com/problemset/problem/112/A

#include <iostream>
#include <string>
using namespace std;

string convert_to_lowercase(string& d) {
    string temp = "";
    for (int i = 0; i < d.size(); i++) {
        int x = d[i];
        if (x >= 65 && x <= 90) {
            x += 32;
            char y = x;
            temp += y;
        }
    }
    return temp;
}
int main() {
    string str1 = "aaaa", str2 = "aaaA";
    // cin >> str1;
    // cin >> str2;
    int s1 = 0, s2 = 0;

    str1 = convert_to_lowercase(str1);
    str2 = convert_to_lowercase(str2);

    cout << str2 << endl;

    // for (int i = 0; i < str1.size(); i++) {
    //     char a = str1[i];
    //     char b = str2[i];
    //     int  x = a;
    //     int  y = b;

    //     cout << "x = " << x << endl;

    //     s1 += x;
    //     s2 += y;
    // }

    // cout << "s1 = " << s1 << " s2 = " << s2 << endl;

    // cout << (s1 < s2 ? -1 : s1 > s2 ? 1 : 0) << endl;

    return 0;
}

// not solved yet
