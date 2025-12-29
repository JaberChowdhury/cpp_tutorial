#include <algorithm>
#include <iostream>
#include <set>
#include <string>
#include <vector>
using namespace std;
#define endl '\n'
#define ll long long

enum SortType { BUBBLE, SELECTION, INSERTION };
void sortString(std::string& str, SortType algo) {
    int n = str.length();

    if (algo == BUBBLE) {
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (str[j] > str[j + 1]) {
                    std::swap(str[j], str[j + 1]);
                }
            }
        }
    } else if (algo == SELECTION) {
        for (int i = 0; i < n - 1; i++) {
            int minIdx = i;
            for (int j = i + 1; j < n; j++) {
                if (str[j] < str[minIdx]) {
                    minIdx = j;
                }
            }
            std::swap(str[i], str[minIdx]);
        }
    } else if (algo == INSERTION) {
        for (int i = 1; i < n; i++) {
            char key = str[i];
            int  j   = i - 1;
            while (j >= 0 && str[j] > key) {
                str[j + 1] = str[j];
                j--;
            }
            str[j + 1] = key;
        }
    }
}
bool isAnagram(string a, string b) {
    // if (a.size() != b.size()) {
    //     return false;
    // }
    sortString(a, BUBBLE);
    sortString(b, BUBBLE);
    // sort(a.begin(), a.end());
    // sort(b.begin(), b.end());

    if (a == b) {
        return true;
    }
    return false;
}
vector<string> split(string s) {
    vector<string> result;
    for (int i = 0; i < s.size(); i++) {
        string temp = "";
        while (i < s.size() && s[i] != ' ') {
            temp.push_back(s[i]);
            i++;
        }
        result.push_back(temp);
    }
    return result;
}

int main() {
    string s = "In a quiet garden, where the danger of a sudden storm often looms, a silent observer might find that "
               "listening to the wind reveals hidden secrets. A master of the craft can stream together thoughts like "
               "a player preparing for a grand parley, ensuring that every reaction leads to a perfect creation. If "
               "you trace the flight of a bird, you may notice it react to a crate left in the earth, near where a "
               "heart once beat with the pride of a prized possession. The teacher knows that the cheater only loses "
               "in the end, just as the skilled artisan knows that a sidled approach to art often yields the most "
               "verse results when writing a serve of poetry. To stare at the aster flowers is to realize that the "
               "thickening clouds are just a kitchen of nature cooking up a storm, and while some might despair at the "
               "praised rain, others find that a stone is simply notes written in the language of the ground.";
    // getline(cin, s);
    vector<string> data = split(s);
    set<string>    unique_data;

    for (auto d : data) {
        unique_data.insert(d);
    }

    data.clear();
    for (auto d : unique_data) {
        data.push_back(d);
    }

    for (int i = 0; i < data.size(); i++) {
        for (int j = i + 1; j < data.size(); j++) {
            if (isAnagram(data[i], data[j])) {
                cout << data[i] << " === " << data[j] << endl;
            }
        }
    }

    return 0;
}
