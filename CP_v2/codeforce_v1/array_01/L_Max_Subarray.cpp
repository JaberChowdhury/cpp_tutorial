#include <iostream>
#include <vector>

using namespace std;

// Define common macros
#define endl '\n'
#define ll long long

/**
 * @brief Solves a single test case for Problem L.
 *
 * This function reads the array size N and the array elements.
 * It then iterates through all O(N^2) subarrays, finds the
 * maximum of each one, and prints it followed by a space.
 */
void solve_one_case() {
    int n;
    cin >> n;

    // Use std::vector for safety and standard C++
    vector<int> nums(n);

    // Read all N elements from index 0 to n-1
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    // --- Efficient O(N^2) Solution ---

    // Iterate over all possible start points (i)
    for (int i = 0; i < n; i++) {

        // This will store the maximum of the subarray nums[i...j]
        // Initialize it to a very small number, or just nums[i].
        // Let's start with nums[i] since the first subarray is [i...i].
        int current_max = nums[i];

        // Iterate over all possible end points (j) starting from i
        for (int j = i; j < n; j++) {

            // Update the maximum element found so far in the [i...j] range
            // As we expand the subarray [i...j], the new max is either
            // the old max (from [i...j-1]) or the new element nums[j].
            if (nums[j] > current_max) {
                current_max = nums[j];
            }

            // --- This is the key change ---
            // The problem asks to print the max of *every* subarray.
            // current_max is the maximum of subarray [i...j].
            // Print it now.
            cout << current_max << " ";
        }
    }

    // After printing all maximums for this test case, print a single newline.
    cout << endl;
}

int main() {
    // Fast I/O
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

#ifndef ONLINE_JUDGE
    // Local testing setup
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    // freopen("error.txt", "w", stderr);
#endif

    int t;
    cin >> t; // Read the number of test cases

    // Loop t times and solve one case in each iteration
    while (t--) {
        solve_one_case();
    }

    return 0;
}
