#include <iostream>
#include <stack>
using namespace std;

class ArrayList {
    int        n, head = 0;
    int*       info;
    int*       link;
    stack<int> available;

  public:
    ArrayList(int sizet) {
        this->n = sizet;
        info    = new int[n + 1];
        link    = new int[n + 1];

        // initialized available indexes
        for (int i = 1; i <= n; i++) {
            available.push(i);
            link[i] = 0;
        }
    }

    void addValue(int value) {
        if (available.size() == 0) {
            cout << "Overflow" << endl;
            return;
        }

        int newIdx = available.top();
        available.pop();
        info[newIdx] = value;
        link[newIdx] = 0;

        // add first head
        if (head == 0) {
            head = newIdx;
            cout << "First node (head) added: " << value << endl;
            return;
        }

        // add at middle or at last
        int ptr = head;
        while (link[ptr] != 0) {
            ptr = link[ptr];
        }
        link[ptr] = newIdx;
    }
    void deleteValue(int value) {
        // handle underflow
        if (available.size() == n) {
            cout << "Underflow" << endl;
            return;
        }

        bool isfound = false;
        int  ptr = head, prev = 0;
        while (ptr != 0) {
            if (info[ptr] == value) {
                isfound = true;
                break;
            }
            prev = ptr;
            ptr  = link[ptr];
        }

        if (!isfound) {
            cout << "Value not found" << endl;
            return;
        }

        available.push(ptr);

        if (ptr == head) {
            head = link[ptr];
        } else {
            link[prev] = link[ptr];
        }
    }

    void display() {
        cout << "\n-----------------\nArray List :: " << endl;
        int ptr = head;
        while (ptr != 0) {
            cout << info[ptr] << " -> ";
            ptr = link[ptr];
        }
        cout << "NULL" << endl << endl;
        cout << "Available List :: " << endl;
        stack<int> temp = available;
        while (!temp.empty()) {
            cout << "[" << temp.top() << "]";
            temp.pop();
        }
        cout << "\n-----------------" << endl;
    }

    ~ArrayList() {
        delete[] info;
        delete[] link;
        cout << "List is distroyed" << endl;
    }
};

int main() {

    ArrayList* al = new ArrayList(10);
    al->display();
    al->addValue(12);
    al->display();
    al->addValue(33);
    al->display();
    al->addValue(44);
    al->display();
    al->deleteValue(33);
    al->display();

    al->addValue(55);
    al->display();

    delete al;
    return 0;
}
