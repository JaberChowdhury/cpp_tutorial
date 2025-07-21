// https://judge.beecrowd.com/en/problems/view/1120

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    char           x;
    string         y;
    vector<string> results;
    while (true) {
        cin >> x >> y;
        if (x == '0' && y == "0")
            break;
        string result = "";
        for (char c : y)
            if (c != x)
                result += c;
        int i = 0;
        while (i < result.size() && result[i] == '0')
            i++;
        result = result.substr(i);

        if (result == "")
            result = "0";

        results.push_back(result);
    }

    for (int i = 0; i < results.size(); i++) {
        cout << results[i] << endl;
    }

    return 0;
}

// solved
