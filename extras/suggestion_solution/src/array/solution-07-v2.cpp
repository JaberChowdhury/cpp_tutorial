#include <iostream>
using namespace std;

// linear search
int main() {
    int limit, search, found_index = -1;
    cout << "Enter the limit :: ";
    cin >> limit;
    int nums[limit];
    for (int i = 0; i < limit; i++) {
        cout << "Enter the number for " << i << " :: ";
        int x;
        cin >> nums[i];
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
