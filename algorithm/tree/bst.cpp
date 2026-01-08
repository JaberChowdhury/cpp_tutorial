#include <iostream>
#include <vector>
using namespace std;

class Node {
  public:
    int   value;
    Node* left;
    Node* right;
    Node(int v) {
        this->value = v;
        this->left = this->right = nullptr;
    }
};

Node* addNode(Node* root, int value) {
    if (root == nullptr) {
        return new Node(value);
    }
    if (value > root->value) {
        root->right = addNode(root->right, value);
    } else if (value < root->value) {
        root->left = addNode(root->left, value);
    }
    return root;
}

Node* minValue(Node* node) {
    Node* current = node;
    while (current && current->left != nullptr) {
        current = current->left;
    }
    return current;
}

Node* deleteNode(Node* root, int value) {
    if (root == nullptr) {
        return root;
    }

    if (value < root->value) {
        root->left = deleteNode(root->left, value);
    } else if (value > root->value) {
        root->right = deleteNode(root->right, value);
    } else {

        if (root->left == nullptr) {
            Node* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == nullptr) {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        Node* temp = minValue(root->right);

        root->value = temp->value;

        root->right = deleteNode(root->right, temp->value);
    }
    return root;
}

void inorder(Node* root) {
    if (root == nullptr) {
        return;
    }

    inorder(root->left);
    cout << root->value << " ";
    inorder(root->right);
}

int main() {

    Node*       root = nullptr;
    vector<int> v    = {12, 67, 78, 2, 90};

    for (auto x : v) {
        root = addNode(root, x);
    }

    inorder(root);
    cout << endl << "after deleting" << endl;
    root = deleteNode(root, 67);

    inorder(root);
    return 0;
}
