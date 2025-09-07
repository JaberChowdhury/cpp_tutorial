#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> split(const string& data, char chunk) {
    vector<string> output;
    string         x = "";

    for (size_t i = 0; i < data.size(); i++) {
        if (data[i] != chunk) {
            x += data[i];
        } else {
            if (!x.empty()) {
                output.push_back(x);
                x = "";
            }
        }
    }

    // push the last word if exists
    if (!x.empty()) {
        output.push_back(x);
    }

    return output;
}

int main() {
    string st = "I , love programming very much that i could code 24 hour a day !!!!";

    vector<string> array = split(st, ' ');

    for (auto d : array) {
        cout << d << endl;
    }

    return 0;
}
