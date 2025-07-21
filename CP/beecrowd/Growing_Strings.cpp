// https://judge.beecrowd.com/en/problems/view/1141

#include <iostream>
#include <vector>
using namespace std;

void print_vector(vector<string>& strings) {
    cout << "Printing the vector :: " << endl;
    for (int i = 0; i < strings.size(); i++) {
        cout << strings[i] << endl;
    }
}

void sort_string(vector<string>& strings) {
    int n = strings.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strings[j].size() > strings[j + 1].size()) {
                swap(strings[j], strings[j + 1]);
            }
        }
    }
}

int main() {
    int n;
    while (true) {
        cin >> n;
        if (n == 0)
            break;

        vector<string> strings;
        for (int i = 0; i < n; i++) {
            string s;
            cin >> s;
            strings.push_back(s);
        }

        sort_string(strings);
        print_vector(strings);
    }
    return 0;
}

// one day i should comeback to solve this
