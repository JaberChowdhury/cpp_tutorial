#include <iostream>
using namespace std;

class Node {
  public:
    int   value;
    Node* next;
};

class LinkedList {
  public:
    Node* head;
    LinkedList() { head = nullptr; }
    ~LinkedList() { delete head; }
    void addNode(int value, int pos) {
        if (pos <= 0) {
            cout << "Invalid position. Position must start from 1." << endl;
            return;
        }

        if (pos == 1) {
            Node* temp = head;
            Node* x    = new Node();
            x->value   = value;
            x->next    = temp;
            head       = x;
            cout << "New Head is added" << endl;
            return;
        }
        if (head == nullptr) {
            cout << "List is empty. You can only insert at position 1." << endl;
            return;
        }
        Node* temp = head;
        for (int i = 1; i < pos - 1; i++) {
            if (temp->next == nullptr) {
                cout << "---------------\nPosition out of bounds. List is short.\n---------------\n" << endl;
                return;
            }
            temp = temp->next;
        }

        Node* a    = new Node();
        a->value   = value;
        a->next    = temp->next;
        temp->next = a;
        cout << "---------------\nInserted " << value << " at position " << pos << "\n---------------\n" << endl;
    }
    void smartDisplay() {
        Node* ptr = head;
        if (ptr == nullptr) {
            cout << "Your list is empty" << endl;
        } else {
            while (ptr != nullptr) {
                cout << "[" << ptr->value << "] --> ";
                ptr = ptr->next;
            }
            cout << "NULL" << endl; // Visual indicator for end of list
        }
    }
};

int main() {
    LinkedList* l = new LinkedList();

    for (int i = 0; i < 12; i++) {
        l->addNode(13 * i, i);
        l->smartDisplay();
    }
    return 0;
}
