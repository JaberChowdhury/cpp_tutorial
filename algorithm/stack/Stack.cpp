#include <iostream>
using namespace std;

void push(int STACK[], int& TOP, int MAXSTK, int ITEM) {
    if (TOP == MAXSTK) {
        cout << "Overflow" << endl;
        return;
    }
    TOP++;
    STACK[TOP] = ITEM;
    cout << ITEM << " pushed to stack." << endl;
}

void pop(int STACK[], int& TOP, int& ITEM) {
    if (TOP == 0) {
        cout << "Underflow" << endl;
        return;
    }

    ITEM = STACK[TOP];
    TOP--;
    cout << ITEM << " popped from stack." << endl;
}

void print_stack(const int STACK[], int TOP) {
    if (TOP == 0) {
        cout << "Stack is empty." << endl;
        return;
    }

    cout << "Stack elements: ";
    for (int i = 1; i <= TOP; ++i) {
        cout << STACK[i] << " ";
    }
    cout << endl;
}

int main() {
    int       TOP    = 0;
    const int MAXSTK = 5;
    int       STACK[MAXSTK + 1];
    int       ITEM;

    push(STACK, TOP, MAXSTK, 5);
    push(STACK, TOP, MAXSTK, 10);
    push(STACK, TOP, MAXSTK, 15);
    print_stack(STACK, TOP);

    pop(STACK, TOP, ITEM);
    print_stack(STACK, TOP);

    return 0;
}
