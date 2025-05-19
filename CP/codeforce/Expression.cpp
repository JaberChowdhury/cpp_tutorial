// https://codeforces.com/problemset/problem/479/A

#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int exp1 = a + b * c;
    int exp2 = a * (b + c);
    int exp3 = a * b * c;
    int exp4 = (a + b) * c;
    int exp5 = a + b + c;


    if (exp1 >= exp2 && exp1 >= exp3 && exp1 >= exp4 && exp1 >= exp5) {
        cout << exp1 << endl;
    } else if (exp2 >= exp1 && exp2 >= exp3 && exp2 >= exp4 && exp2 >= exp5) {
        cout << exp2 << endl;
    } else if (exp3 >= exp1 && exp3 >= exp2 && exp3 >= exp4 && exp3 >= exp5) {
        cout << exp3 << endl;
    } else if (exp4 >= exp1 && exp4 >= exp2 && exp4 >= exp3 && exp4 >= exp5) {
        cout << exp4 << endl;
    } else {
        cout << exp5 << endl;
    }

    return 0;
}
