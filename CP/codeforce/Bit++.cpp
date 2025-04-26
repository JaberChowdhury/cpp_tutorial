// #https: // codeforces.com/problemset/problem/282/A

#include <iostream>
#include <string>
using namespace std;

int main() {
    int x = 0;
    cin >> x;
    int reslut = 0;
    for (int i = 0; i < x; i++) {
        string operation;
        cin >> operation;
        if (operation == "++X" || operation == "X++")
            ++reslut;
        else if (operation == "--X" || operation == "X--")
            --reslut;
    }

    cout << reslut << endl;
    return 0;
}
