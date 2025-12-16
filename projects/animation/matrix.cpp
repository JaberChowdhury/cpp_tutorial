#include <chrono> // For milliseconds
#include <iostream>
#include <thread> // For sleep_for

using namespace std;

int main() {
    int size = 30;

    for (int k = 0; k < size; k++) {
        int flag = 1;
        cout << "\033[2J\033[1;1H";

        for (int i = 1; i <= size; i++) {
            for (int j = 1; j <= size; j++) {

                if (i == flag && j == flag + k) {
                    cout << 1 << " ";
                } else {
                    // cout << "\033[90m0 \033[0m";
                    cout << "- ";
                }
            }
            flag++;
            cout << endl;
        }

        this_thread::sleep_for(chrono::milliseconds(100));
    }

    return 0;
}
