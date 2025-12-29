#include <iostream>
using namespace std;

void insert(int queue[], int value, int front, int rear, int size) {

    // handling overflow
    if (rear == size) {
        cout << "Overflow" << endl;
        return;
    }
}
int main() {

    int size = 5, front = -1, rear = -1;
    int queue[size];
    insert(queue, 12, front, rear, size);

    return 0;
}
