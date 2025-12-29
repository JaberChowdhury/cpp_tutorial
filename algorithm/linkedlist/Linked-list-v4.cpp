#include <iostream>

// Represents a node in the list
struct Node {
    int data;
    int next; // Stores the INDEX of the next node, not a pointer
};

class ArrayLinkedList {
  private:
    Node* memoryPool; // The fixed-size array
    int   capacity;   // Maximum size of the list
    int   head;       // Index of the first actual node
    int   freeHead;   // Index of the first empty slot (Free List)

  public:
    // Constructor: Initialize the memory pool
    ArrayLinkedList(int size) {
        capacity   = size;
        memoryPool = new Node[capacity];
        head       = -1; // -1 represents NULL
        freeHead   = 0;  // Start allocating from index 0

        // Link all nodes together in the free list initially
        // 0 -> 1 -> 2 ... -> -1
        for (int i = 0; i < capacity - 1; i++) {
            memoryPool[i].next = i + 1;
        }
        memoryPool[capacity - 1].next = -1; // End of free list
    }

    // Destructor: Clean up raw memory
    ~ArrayLinkedList() { delete[] memoryPool; }

    // Helper: Simulate 'new' (Allocate a node index)
    int allocateNode() {
        if (freeHead == -1) {
            std::cout << "Error: List is full (Out of Memory)!\n";
            return -1;
        }
        int newIndex = freeHead;
        freeHead     = memoryPool[freeHead].next; // Move free pointer to next available
        return newIndex;
    }

    // Helper: Simulate 'delete' (Return index to free list)
    void deallocateNode(int index) {
        memoryPool[index].next = freeHead; // Point this node to current free head
        freeHead               = index;    // Make this node the new free head
    }

    // 1. Insert at any position (0-based index)
    void insertAt(int position, int value) {
        // Validate position validity (simple bounds check)
        if (position < 0) {
            std::cout << "Invalid position.\n";
            return;
        }

        int newIdx = allocateNode();
        if (newIdx == -1)
            return; // List full

        memoryPool[newIdx].data = value;

        // Case 1: Insert at Head
        if (position == 0) {
            memoryPool[newIdx].next = head;
            head                    = newIdx;
            return;
        }

        // Case 2: Insert Middle or End
        int prev = head;
        // Traverse to the node BEFORE the desired position
        for (int i = 0; i < position - 1; i++) {
            if (prev == -1) {
                std::cout << "Position out of bounds.\n";
                deallocateNode(newIdx); // Rollback allocation
                return;
            }
            prev = memoryPool[prev].next;
        }

        // Link the new node
        memoryPool[newIdx].next = memoryPool[prev].next;
        memoryPool[prev].next   = newIdx;
    }

    // 2. Delete from any position
    void deleteAt(int position) {
        if (head == -1) {
            std::cout << "List is empty.\n";
            return;
        }

        if (position < 0) {
            std::cout << "Invalid position.\n";
            return;
        }

        int temp = head;

        // Case 1: Delete Head
        if (position == 0) {
            head = memoryPool[head].next;
            deallocateNode(temp);
            return;
        }

        // Case 2: Delete Middle or End
        int prev = -1;
        // Traverse to the node to be deleted, keeping track of previous
        for (int i = 0; i < position; i++) {
            prev = temp;
            temp = memoryPool[temp].next;

            if (temp == -1) {
                std::cout << "Position out of bounds.\n";
                return;
            }
        }

        // Unlink the node
        memoryPool[prev].next = memoryPool[temp].next;
        // Free the memory index
        deallocateNode(temp);
    }

    // Display the list
    void display() {
        if (head == -1) {
            std::cout << "List is Empty\n";
            return;
        }
        int curr = head;
        std::cout << "Head -> ";
        while (curr != -1) {
            std::cout << "[" << memoryPool[curr].data << "] -> ";
            curr = memoryPool[curr].next;
        }
        std::cout << "NULL\n";
    }

    // Debug: Visualize the underlying array structure
    void debugArray() {
        std::cout << "\n--- Internal Array State ---\n";
        std::cout << "Idx | Data | Next\n";
        for (int i = 0; i < capacity; i++) {
            std::cout << " " << i << "  |  " << memoryPool[i].data << "   |  " << memoryPool[i].next << "\n";
        }
        std::cout << "Head: " << head << ", Free: " << freeHead << "\n----------------------------\n";
    }
};

int main() {
    // Create a list with a capacity of 10 nodes
    ArrayLinkedList list(10);

    list.insertAt(0, 10); // Insert 10 at pos 0
    list.insertAt(1, 20); // Insert 20 at pos 1
    list.insertAt(2, 30); // Insert 30 at pos 2
    list.display();

    std::cout << "\nInsert 15 at position 1:\n";
    list.insertAt(1, 15);
    list.display();

    std::cout << "\nDelete position 2 (value 20):\n";
    list.deleteAt(2);
    list.display();

    // Show how the array looks internally to verify it's not contiguous
    list.debugArray();

    return 0;
}
