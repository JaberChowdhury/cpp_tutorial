// https://judge.beecrowd.com/en/problems/view/1024

#include <iostream>
#include <string>
using namespace std;

char three_pos_right(char x) {
    int ascii = x, moved;
    if ((ascii >= 97 && ascii <= 122) || (ascii >= 65 && ascii <= 90)) {
        moved = ascii + 3;
    } else {
        return x;
    }
    char moved_value = moved;
    return moved_value;
}

string reverse_text(string text) {
    string x = "";
    for (int i = text.size() - 1; i >= 0; i--) {
        x += text[i];
    }
    return x;
}

string one_pos_left(string x) {
    int    half_position = (x.size()) / 2;
    string result        = "";
    for (int i = 0; i < half_position; i++) {
        result += x[i];
    }
    for (int i = half_position; i < x.size(); i++) {
        int y = x[i];
        y--;
        char z = y;
        result += z;
    }
    return result;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    string answer[t];
    for (int i = 0; i < t; i++) {
        string x, y = "";
        getline(cin, x);
        for (int j = 0; j < x.size(); j++) {
            y += three_pos_right(x[j]);
        }
        x         = reverse_text(y);
        answer[i] = one_pos_left(x);
    }

    for (int i = 0; i < t; i++) {
        cout << answer[i] << endl;
    }
    return 0;
}

// a = 97, z = 122
// A = 65, Z = 90
// solved
