#include <iostream>
using namespace std;

class Node {
  public:
    char  value;
    Node* left;
    Node* right;
    Node(char v = '0', Node* l = nullptr, Node* r = nullptr) {
        this->value = v;
        this->left  = l;
        this->right = r;
    }
};
void preorder_display(Node* root) {
    if (root == nullptr)
        return;
    cout << root->value << endl;
    preorder_display(root->left);
    preorder_display(root->right);
}

int  count   = 0;
bool isFound = false;
void search_data(char data, Node* root) {
    cout << "count = " << count++ << endl;
    if (root == nullptr) {
        cout << "Item is not found" << endl;
        return;
    }
    if (root->value == data) {
        isFound = true;
        cout << "item is found" << endl;
        return;
    }
    if (!isFound) {
        search_data(data, root->left);
        search_data(data, root->right);
    }
}

int main() {

    Node* root = new Node('A', new Node('B'), new Node('C', new Node('X'), new Node('F')));

    // preorder_display(root);
    char search = 'B';
    search_data(search, root);
    return 0;
}
