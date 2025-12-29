#include <iostream>
using namespace std;

class Stack_ds {

  public:
    int  size;
    int  top;
    int* stack;

    Stack_ds(int capacity) {
        size  = capacity;
        top   = -1;
        stack = new int[size];
    }
    void push(int value) {
        // handle overflow
        if (this->top == this->size) {
            cout << "Overflow but handled" << endl;
            int  newSize = size + 10;
            int* temp    = new int[newSize];

            for (int i = 0; i <= top; i++) {
                temp[i] = stack[i];
            }
            delete[] stack;
            this->stack = temp;
        }
        this->top++;
        stack[top] = value;
        cout << "Value " << value << " is add at " << top << endl;
    }
    void pop() {
        // handle underflow
        if (this->top == -1) {
            cout << "Underflow" << endl;
            return;
        }

        this->top--;
        cout << "The item is removed" << endl;
    }
    void print_stack() {
        if (this->top == -1) {
            cout << "Stack is empty." << endl;
            return;
            b
        }

        cout << "Stack elements: ";
        for (int i = 0; i <= this->top; ++i) {
            cout << this->stack[i] << " ";
        }
        cout << endl;
    }
};

int main() {

    Stack_ds* s = new Stack_ds(5);

    s->push(10);
    s->push(200);
    s->push(3000);
    s->push(40000);
    s->push(500000);
    s->push(600000);
    s->push(600000);
    s->push(600000);
    s->push(600000);

    // push(stack, 400, size, top);
    // s->pop();
    // s->pop();
    // s->pop();
    // s->pop();
    // s->pop();
    // s->pop();
    s->print_stack();
    return 0;
}
