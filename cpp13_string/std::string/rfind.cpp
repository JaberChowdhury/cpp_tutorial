#include <iostream>
#include <string>

using namespace std;

int main() {
    string s       = "abracadabra";
    string pattern = "abra";

    // 1. Basic rfind (searches from the very end)
    size_t last_idx = s.rfind(pattern);
    cout << "Last occurrence of 'abra': " << last_idx << "\n";
    // Output: 7 (starts at index 7)

    // 2. rfind with a pos parameter
    // Find the last 'abra' that STARTS at or before index 6
    size_t restricted_idx = s.rfind(pattern, 6);
    cout << "Last occurrence starting <= 6: " << restricted_idx << "\n";
    // Output: 0 (it skips the one at 7, and finds the one at 0)

    // 3. Handling not found
    if (s.rfind("xyz") == string::npos) {
        cout << "'xyz' was not found.\n";
    }

    string temp = "I love programing";
    if (temp.rfind("love") == string::npos) {
        cout << "Not found" << endl;
    } else {
        cout << " found" << endl;
    }

    return 0;
}
