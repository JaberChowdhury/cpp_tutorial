#include <iostream>
using namespace std;

#define MAX 5

void QINSERT(int QUEUE[], int N, int& FRONT, int& REAR, int ITEM) {
    if ((FRONT == 1 && REAR == N) || (FRONT == REAR + 1)) {
        cout << "OVERFLOW\n";
        return;
    }

    if (FRONT == 0) {
        FRONT = 1;
        REAR  = 1;
    } else if (REAR == N) {
        REAR = 1;
    } else {
        REAR = REAR + 1;
    }

    QUEUE[REAR] = ITEM;

    cout << "Inserted " << ITEM << " into queue.\n";
}

void QDELETE(int QUEUE[], int N, int& FRONT, int& REAR, int& ITEM) {
    if (FRONT == 0) {
        cout << "UNDERFLOW\n";
        return;
    }

    ITEM = QUEUE[FRONT];
    cout << "Deleted item: " << ITEM << endl;

    if (FRONT == REAR) { // Only one element left
        FRONT = 0;
        REAR  = 0;
    } else if (FRONT == N) { // Wrap around
        FRONT = 1;
    } else {
        FRONT = FRONT + 1;
    }
}

void display(int QUEUE[], int N, int FRONT, int REAR) {
    if (FRONT == 0) {
        cout << "Queue is empty.\n";
        return;
    }

    cout << "Queue elements: ";
    int i = FRONT;
    while (true) {
        cout << QUEUE[i] << " ";
        if (i == REAR)
            break;
        if (i == N)
            i = 1;
        else
            i++;
    }
    cout << endl;
}

int main() {
    int QUEUE[MAX + 1];
    int FRONT = 0, REAR = 0;
    int ITEM;
    int N = MAX;

    QINSERT(QUEUE, N, FRONT, REAR, 10);
    QINSERT(QUEUE, N, FRONT, REAR, 20);
    QINSERT(QUEUE, N, FRONT, REAR, 30);
    display(QUEUE, N, FRONT, REAR);

    QDELETE(QUEUE, N, FRONT, REAR, ITEM);
    display(QUEUE, N, FRONT, REAR);

    QINSERT(QUEUE, N, FRONT, REAR, 40);
    QINSERT(QUEUE, N, FRONT, REAR, 50);
    display(QUEUE, N, FRONT, REAR);

    QINSERT(QUEUE, N, FRONT, REAR, 60);
    QDELETE(QUEUE, N, FRONT, REAR, ITEM);
    QINSERT(QUEUE, N, FRONT, REAR, 60);
    display(QUEUE, N, FRONT, REAR);

    return 0;
}
