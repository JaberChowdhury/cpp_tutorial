// https://judge.beecrowd.com/en/problems/view/1042
#include <iostream>
using namespace std;

void bubbleSort(int nums[], int n) {
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (nums[j] > nums[j + 1]) {
                int temp    = nums[j];
                nums[j]     = nums[j + 1];
                nums[j + 1] = temp;
                swapped     = true;
            }
        }
        if (!swapped)
            break; // Optimization: stop early if sorted
    }
}

int main() {
    int nums[3], duplicate[3];
    for (int i = 0; i < 3; i++) {
        int x;
        cin >> x;
        nums[i]      = x;
        duplicate[i] = x;
    }

    bubbleSort(nums, 3);

    for (int i = 0; i < 3; i++) {
        cout << nums[i] << endl;
    }
    cout << endl;
    for (int i = 0; i < 3; i++) {
        cout << duplicate[i] << endl;
    }
    return 0;
}

// solved
