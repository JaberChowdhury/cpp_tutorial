#include <iostream>
using namespace std;

class Node {
  public:
    int   info;
    Node* link;
};

int main() {

    int n;
    cout << "How many nodes? ";
    cin >> n;

    if (n <= 0) {
        cout << "Nothing to do.";
        return 0;
    }

    Node* START = NULL;
    Node* temp  = NULL;

    // Create nodes 1 to n inside loop
    for (int i = 1; i <= n; i++) {

        Node* newNode = new Node(); // make new node
        cout << "Enter value for node " << i << ": ";
        cin >> newNode->info;
        newNode->link = NULL;

        if (i == 1) {
            // first node
            START = newNode;
            temp  = newNode;
        } else {
            // attach next nodes
            temp->link = newNode;
            temp       = newNode;
        }
    }

    // Traversing the linked list
    cout << "\nLinked List: ";
    Node* PTR = START;

    while (PTR != NULL) {
        cout << PTR->info << " ";
        PTR = PTR->link;
    }

    return 0;
}
