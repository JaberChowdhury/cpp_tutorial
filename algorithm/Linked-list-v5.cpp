#include <iostream>

// 1. Define the Node Structure
struct Node {
    int   data;
    Node* next;
};

// Class to handle Linked List operations
class LinkedList {
  private:
    Node* head; // Pointer to the first node

  public:
    // Constructor
    LinkedList() { head = nullptr; }

    // --- INSERT FUNCTION ---
    // Position 0 = Start of list
    void insertNode(int value, int position) {
        // Create the new node
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = nullptr;

        // Case 1: Insert at the beginning (Position 0)
        if (position == 0) {
            newNode->next = head;
            head          = newNode;
            std::cout << "Inserted " << value << " at position " << position << std::endl;
            return;
        }

        // Case 2: Insert at specific position or end
        Node* temp = head;
        // Traverse to the node JUST BEFORE the desired position
        for (int i = 0; i < position - 1; i++) {
            if (temp == nullptr) {
                std::cout << "Position out of bounds." << std::endl;
                delete newNode; // Prevent memory leak
                return;
            }
            temp = temp->next;
        }

        // Link the new node
        if (temp != nullptr) {
            newNode->next = temp->next; // Point new node to the next node
            temp->next    = newNode;    // Point previous node to the new node
            std::cout << "Inserted " << value << " at position " << position << std::endl;
        } else {
            std::cout << "Position out of bounds." << std::endl;
            delete newNode;
        }
    }

    // --- DELETE FUNCTION ---
    // Position 0 = Start of list
    void deleteNode(int position) {
        if (head == nullptr) {
            std::cout << "List is empty." << std::endl;
            return;
        }

        Node* temp = head;

        // Case 1: Delete the head (Position 0)
        if (position == 0) {
            head = head->next; // Move head to the second node
            delete temp;       // Free memory of old head
            std::cout << "Deleted node at position " << position << std::endl;
            return;
        }

        // Case 2: Delete from specific position
        // Traverse to the node JUST BEFORE the one we want to delete
        for (int i = 0; i < position - 1; i++) {
            if (temp == nullptr || temp->next == nullptr) {
                std::cout << "Position out of bounds." << std::endl;
                return;
            }
            temp = temp->next;
        }

        // Node to be deleted is temp->next
        Node* nodeToDelete = temp->next;

        if (nodeToDelete == nullptr) {
            std::cout << "Position out of bounds." << std::endl;
            return;
        }

        temp->next = nodeToDelete->next; // Unlink the node
        delete nodeToDelete;             // Free memory
        std::cout << "Deleted node at position " << position << std::endl;
    }

    // --- DISPLAY FUNCTION ---
    void display() {
        if (head == nullptr) {
            std::cout << "List is empty." << std::endl;
            return;
        }

        Node* temp = head;
        std::cout << "Current List: ";
        while (temp != nullptr) {
            std::cout << temp->data << " -> ";
            temp = temp->next;
        }
        std::cout << "NULL" << std::endl;
    }
};

int main() {
    LinkedList list;

    // 1. Insertions
    list.insertNode(10, 0); // Add 10 at start: 10 -> NULL
    list.insertNode(20, 1); // Add 20 at pos 1: 10 -> 20 -> NULL
    list.insertNode(30, 1); // Add 30 at pos 1: 10 -> 30 -> 20 -> NULL
    list.insertNode(5, 0);  // Add 5 at start:  5 -> 10 -> 30 -> 20 -> NULL

    list.display();

    // 2. Deletions
    list.deleteNode(0); // Delete head (5)
    list.display();

    list.deleteNode(2); // Delete node at index 2 (value 20)
    list.display();

    return 0;
}
