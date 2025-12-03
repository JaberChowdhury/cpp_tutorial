#include <cstddef>
#include <iostream>
using namespace std;

class Node {

  public:
    char  value;
    Node* next;
};

int main() {
    int   n = 10, ptr = 1;
    Node* start = NULL;
    Node* temp  = NULL;
    while (n--) {

        Node* newNode = new Node();
        cout << "Enter the value for new node( char type ) :: ";
        cin >> newNode->value;
        newNode->next = NULL;

        if (ptr == 1) {
            start = newNode;
            temp  = newNode;
        } else {
            temp       = newNode;
            temp->next = newNode;
        }
        ptr++;
        cout << "\nDo you want to continue ? (press 1 or 0 to exit) :: ";
        cin >> n;
        if (n == 0) {
            break;
        }
    }
    cout << "\nLinked List: ";
    Node* PTR = start;

    while (PTR != NULL) {
        cout << PTR->value << " ";
        PTR = PTR->next;
    }

    return 0;
}
