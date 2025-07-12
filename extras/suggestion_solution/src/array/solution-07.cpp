#include <iostream>
#include <vector>
using namespace std;

// linear search
int main() {
    vector<int> nums;
    int         limit, search, found_index = -1;
    cout << "Enter the limit :: ";
    cin >> limit;
    for (int i = 0; i < limit; i++) {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    cout << "what number to find out ? :: ";
    cin >> search;

    for (int i = 0; i < limit; i++) {
        if (search == nums[i]) {
            found_index = i;
            break;
        }
    }

    if (found_index == -1) {
        cout << "Number didnt found" << endl;
    } else {
        cout << "The number is found at index " << found_index << endl;
    }
    return 0;
}
