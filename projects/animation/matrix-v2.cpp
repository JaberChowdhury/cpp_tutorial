#include <chrono> // For milliseconds
#include <iostream>
#include <thread> // For sleep_for

using namespace std;

int main() {
    int size       = 30;
    int frame_loop = 0;
    while (1) {
        int flag = 1, f2 = size;
        cout << "\033[2J\033[1;1H";

        for (int i = 1; i <= size; i++) {
            for (int j = 1; j <= size; j++) {
                if ((j == flag + frame_loop) || (i == flag && j == f2 - frame_loop)) {
                    cout << 1 << " ";
                } else {
                    // cout << "\033[90m0 \033[0m";
                    cout << "- ";
                }
            }
            flag++;
            f2--;
            cout << endl;
        }
        frame_loop++;
        if (frame_loop > size)
            frame_loop = 0;
        this_thread::sleep_for(chrono::milliseconds(100));
    }

    return 0;
}
