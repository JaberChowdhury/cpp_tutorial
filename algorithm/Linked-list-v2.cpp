#include <iostream>
using namespace std;

class Node {
  public:
    int   value;
    Node* next;
};

class LinkedList {
    Node* head;

  public:
    LinkedList() { this->head = nullptr; }

    void addValue(int value, int pos) {
        // in dynamic linked list there are no overflow
        // handle wrong pos
        // start from 1
        if (pos <= 0) {
            cout << "Position must have to be greater than 0" << endl;
            return;
        }
        if (head == nullptr && pos != 1) {
            cout << "The list is empty and it has no head/start" << endl;
            cout << "Assign head at position 1 first" << endl;
            return;
        }

        Node* newNode  = new Node();
        newNode->value = value;
        newNode->next  = nullptr;
        // initialize head
        if (head == nullptr) {
            head       = newNode;
            head->next = nullptr;
            cout << "Head is initialized" << endl;
            return;
        }

        // add new head
        if (pos == 1) {
            newNode->next = head;
            head          = newNode;
            cout << "New head is added" << endl;
            return;
        }

        Node* temp = head;
        for (int i = 1; i < pos - 1; i++) {
            if (temp == nullptr)
                break;
            temp = temp->next;
        }

        if (temp == nullptr) {
            cout << "Position out of bounds (List is too short)." << endl;
            delete newNode;
            return;
        }

        newNode->next = temp->next;
        temp->next    = newNode;
    }

    void deleteValue(int value) {

        // check underflow
        //
        if (head == nullptr) {
            cout << "Underflow" << endl;
            return;
        }

        // delete head

        if (head->value == value) {
            Node* t = head;
            head    = head->next;
            delete t;
            cout << "Value " << value << " deleted (Head)." << endl;
            return;
        }

        Node* temp = head;
        Node* prev = nullptr;
        while (temp != nullptr && temp->value != value) {
            prev = temp;
            temp = temp->next;
        }

        if (temp == nullptr) {
            cout << "Value " << value << " not found in the list." << endl;
            return;
        }

        prev->next = temp->next;
        delete temp;
        cout << "Value " << value << " deleted." << endl;
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
            cout << "NULL" << endl;
        }
    }
    ~LinkedList() {
        Node* current = head;
        while (current != nullptr) {
            Node* nextNode = current->next;
            delete current;
            current = nextNode;
        }
        head = nullptr;
        cout << "Dynamic list memory cleared." << endl;
    }
};
int main() {
    LinkedList* l = new LinkedList();

    // --- TEST CASE 1: Basic Insertion ---
    cout << "--- Test 1: Basic Insertion ---" << endl;
    l->addValue(10, 1); // Head
    l->addValue(30, 2); // Tail
    l->addValue(20, 2); // Middle
    l->smartDisplay();  // Expected: [10] --> [20] --> [30] --> NULL

    // --- TEST CASE 2: Boundary Insertions ---
    cout << "\n--- Test 2: Boundary Insertions ---" << endl;
    l->addValue(5, 1);  // New Head
    l->addValue(40, 5); // New Tail (Position is exactly size + 1)
    l->smartDisplay();  // Expected: [5] --> [10] --> [20] --> [30] --> [40] --> NULL

    // --- TEST CASE 3: Error Handling (The Crash Fix) ---
    cout << "\n--- Test 3: Out of Bounds ---" << endl;
    l->addValue(99, 10); // Should print "List is too short" and NOT crash
    l->addValue(0, -1);  // Should print "Position must be > 0"

    // --- TEST CASE 4: Deletion Logic ---
    cout << "\n--- Test 4: Deletion ---" << endl;
    l->deleteValue(5);   // Delete Head
    l->deleteValue(30);  // Delete Middle
    l->deleteValue(40);  // Delete Tail
    l->deleteValue(100); // Delete Non-existent value
    l->smartDisplay();   // Expected: [10] --> [20] --> NULL

    // --- TEST CASE 5: Emptying the List ---
    cout << "\n--- Test 5: Emptying ---" << endl;
    l->deleteValue(10);
    l->deleteValue(20);
    l->smartDisplay(); // Expected: Your list is empty
    l->deleteValue(5); // Test Underflow: Should print "Underflow"

    delete l;
    return 0;
}
