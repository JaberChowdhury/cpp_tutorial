#include <iostream>
#include <vector>

using namespace std;

class ArrayLinkedList {
  private:
    struct Node {
        int data;
        int next; // Points to the index of the next node
    };

    vector<Node> memory;   // The "heap"
    int          head;     // Index of the first actual node
    int          freeHead; // Index of the first empty slot
    int          capacity;

  public:
    // Constructor to initialize the "memory"
    ArrayLinkedList(int cap) {
        this->capacity = cap;
        memory.resize(cap);
        head     = -1; // -1 represents NULL
        freeHead = 0;  // Start of free list is index 0

        // Initialize free list: every node points to the next index
        for (int i = 0; i < cap - 1; i++) {
            memory[i].next = i + 1;
        }
        memory[cap - 1].next = -1; // Last free node points to NULL
    }

    // Helper: Allocate a node from the free list
    int allocateNode() {
        if (freeHead == -1) {
            cout << "Error: Memory Full (Stack Overflow)" << endl;
            return -1;
        }
        int newIndex = freeHead;
        freeHead     = memory[freeHead].next; // Move freeHead to the next available
        return newIndex;
    }

    // Helper: Return a node to the free list
    void freeNode(int index) {
        memory[index].next = freeHead; // Point this node to the current freeHead
        freeHead           = index;    // Make this node the new freeHead
    }

    // 1. Insert at any position (0-indexed)
    void insertAt(int pos, int value) {
        // Validation
        if (pos < 0) {
            cout << "Invalid position" << endl;
            return;
        }

        int newNodeIdx = allocateNode();
        if (newNodeIdx == -1)
            return; // Allocation failed

        memory[newNodeIdx].data = value;

        // Case 1: Insert at Head (position 0)
        if (pos == 0) {
            memory[newNodeIdx].next = head;
            head                    = newNodeIdx;
            return;
        }

        // Case 2: Insert Middle/End
        int temp = head;
        for (int i = 0; i < pos - 1; i++) {
            if (temp == -1) {
                cout << "Position out of bounds" << endl;
                // Cleanup: we allocated but couldn't link, so free it back
                freeNode(newNodeIdx);
                return;
            }
            temp = memory[temp].next;
        }

        // Link the new node
        memory[newNodeIdx].next = memory[temp].next;
        memory[temp].next       = newNodeIdx;
    }

    // 2. Delete from any position
    void deleteAt(int pos) {
        if (head == -1) {
            cout << "List is empty" << endl;
            return;
        }

        // Case 1: Delete Head
        if (pos == 0) {
            int toDelete = head;
            head         = memory[head].next;
            freeNode(toDelete);
            return;
        }

        // Case 2: Delete Middle/End
        int temp = head;
        for (int i = 0; i < pos - 1; i++) {
            if (temp == -1 || memory[temp].next == -1) {
                cout << "Position out of bounds" << endl;
                return;
            }
            temp = memory[temp].next;
        }

        int toDelete = memory[temp].next;
        if (toDelete == -1) {
            cout << "Position out of bounds" << endl;
            return;
        }

        // Unlink the node
        memory[temp].next = memory[toDelete].next;

        // Return memory to free list
        freeNode(toDelete);
    }

    // Display the list
    void display() {
        int curr = head;
        cout << "List: ";
        while (curr != -1) {
            cout << memory[curr].data << " -> ";
            curr = memory[curr].next;
        }
        cout << "NULL" << endl;
    }

    // Debug: See the physical array state
    void debugMemory() {
        cout << "\n--- Memory State ---" << endl;
        cout << "Head: " << head << ", FreeHead: " << freeHead << endl;
        cout << "Idx | Data | Next" << endl;
        for (int i = 0; i < capacity; i++) {
            cout << " " << i << "  |  " << memory[i].data << "   | " << memory[i].next << endl;
        }
        cout << "--------------------\n" << endl;
    }
};

int main() {
    ArrayLinkedList list(5); // Capacity of 5 nodes

    list.insertAt(0, 10); // List: 10
    list.insertAt(1, 20); // List: 10 -> 20
    list.insertAt(0, 5);  // List: 5 -> 10 -> 20
    list.insertAt(2, 15); // List: 5 -> 10 -> 15 -> 20

    list.display();

    cout << "Deleting index 1 (value 10)..." << endl;
    list.deleteAt(1); // List: 5 -> 15 -> 20

    list.display();

    // Uncomment to see how indices are managed internally
    list.debugMemory();

    return 0;
}
