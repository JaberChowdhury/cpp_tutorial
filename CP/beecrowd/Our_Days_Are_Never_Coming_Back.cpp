// https://judge.beecrowd.com/en/problems/view/1864

#include <iostream>
using namespace std;

int main() {
    int n;

    cin >> n;
    string quote = "LIFE IS NOT A PROBLEM TO BE SOLVED";

    for (int i = 0; i < n; i++) {
        cout << quote[i];
    }
    cout << endl;
    return 0;
}

// solved
