#include <iostream>
using namespace std;

int main() {
    int itaration = 0;
    int n         = 16;
    int data[]    = {21, 23, 43, 1, 2, 32, 12, 345, 56, 76, 23, 46, 176, 23, 576, 12};

    for (int k = 1; k <= n - 1; k++) {
        int ptr = 1;
        while (ptr <= n - k) {
            itaration++;
            if (data[ptr] > data[ptr - 1]) {
                int temp      = data[ptr];
                data[ptr]     = data[ptr + 1];
                data[ptr + 1] = temp;
            }
            ptr++;
        }
    }
    cout << "itaration ::  " << itaration << endl;
    return 0;
}
