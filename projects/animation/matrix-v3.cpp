// #include <chrono> // For milliseconds
#include <iostream>
// #include <thread> // For sleep_for

using namespace std;

int main() {
    int size = 5;
    int f2   = size;
    int k    = 0;
    while (true) {
        for (int i = 1; i <= size; i++) {
            for (int j = 1; j <= size; j++) {
                if (j == f2) {
                    cout << i << j << " ";
                } else {
                    cout << i << j << " ";
                }
            }
            f2--;
            cout << endl;
        }
        k++;
        if (k > size) {
            k = 0;
        }
    }

    // under construction
