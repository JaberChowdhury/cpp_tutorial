
#include <iostream>
using namespace std;
#define endl '\n'

void test() {
    int k, s, total_variant = 0;
    cin >> k >> s;

    for (int x = 0; x <= k; x++) {
        for (int y = 0; y <= k; y++) {
            for (int z = 0; z <= k; z++) {
                if (x + y + z == s) {
                    cout << " | " << x << " | " << y << " | " << z << endl;
                    total_variant++;
                }
            }
        }
    }

    cout << total_variant << endl;
};

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
        test();
    return 0;
}

// #include <atomic>
// #include <iostream>
// #include <thread>
// #include <vector>
// using namespace std;

// #define endl '\n'

// void count_combinations(int start, int end, int k, int s, atomic<int>& total_variant) {
//     int local_count = 0;

//     for (int x = start; x <= end; x++) {
//         for (int y = 0; y <= k; y++) {
//             int z = s - x - y;
//             if (z >= 0 && z <= k) {
//                 local_count++;
//             }
//         }
//     }

//     total_variant += local_count; // Atomic operation (thread-safe)
// }

// void test() {
//     int k, s;
//     cin >> k >> s;

//     atomic<int> total_variant(0);

//     // Number of threads (you can adjust it)
//     int num_threads = thread::hardware_concurrency();
//     if (num_threads == 0)
//         num_threads = 4; // fallback

//     vector<thread> threads;
//     int            chunk = (k + 1) / num_threads;
//     int            start = 0;

//     for (int i = 0; i < num_threads; i++) {
//         int end = (i == num_threads - 1) ? k : start + chunk - 1;
//         threads.emplace_back(count_combinations, start, end, k, s, ref(total_variant));
//         start += chunk;
//     }

//     for (auto& t : threads)
//         t.join();

//     cout << total_variant << endl;
// }

// int main() {
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

//     int t;
//     cin >> t;
//     while (t--)
//         test();
//     return 0;
// }
