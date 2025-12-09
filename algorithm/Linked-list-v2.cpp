#include <iostream>
using namespace std;
class Node {
  public:
    int   value;
    Node* next;
};
int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);
    // cout.tie(nullptr);

    Node* start = NULL;
    Node* temp  = NULL;

    int ptr = 1, n = 10;

    while (n--) {
        Node* newNode = new Node();
        cout << "Enter a new value :: ";
        cin >> newNode->value;
        cout << "\n";
        newNode->next = NULL;

        if (ptr == 1) {
            start = newNode;
            temp  = newNode;
        } else {
            temp->next = newNode;
            temp       = newNode;
        }
        ptr++;

        cout << "Do you want to continue?(press 1 or 0 to exit) :: ";
        cin >> n;
        cout << "\n";
    }

    // iterate through linked list

    Node* current = start;
    while (current != NULL) {
        cout << "Pointer :: " << current << "  Value :: " << current->value << "  Next Pointer :: " << current->next
             << endl;
        current = current->next;
    }
    return 0;
}
