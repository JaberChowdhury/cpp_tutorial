#include <iostream>
using namespace std;

class Node {
  public:
    int   info;
    Node* left;
    Node* right;
    Node(int key, Node* l, Node* r) {
        this->info  = key;
        this->left  = l;
        this->right = r;
    }
};
void preorder_display(Node* root) {
    if (root == nullptr)
        return;
    cout << root->info << endl;
    preorder_display(root->left);
    preorder_display(root->right);
}
void display_recursive(Node* root, string prefix, bool isLeft) {
    if (root == nullptr)
        return;

    cout << prefix;
    cout << (isLeft ? "├── " : "└── ");
    cout << root->info << endl;

    // Build the prefix for the next level
    string newPrefix = prefix + (isLeft ? "│   " : "    ");

    // Recurse to children
    display_recursive(root->left, newPrefix, true);
    display_recursive(root->right, newPrefix, false);
}

// The clean method you requested
void display_tree(Node* root) {
    if (root == nullptr) {
        cout << "Tree is empty." << endl;
        return;
    }
    // We treat the root as a "last" child (false) so it doesn't have a side-bar
    display_recursive(root, "", false);
}
Node* build_large_tree(int depth, int& counter) {
    if (depth <= 0)
        return nullptr;

    // Create the current node with a unique ID
    Node* newNode = new Node(counter++, nullptr, nullptr);

    // Recursively build left and right subtrees
    newNode->left  = build_large_tree(depth - 1, counter);
    newNode->right = build_large_tree(depth - 1, counter);

    return newNode;
}
int main() {

    int nodeCounter  = 1;
    int desiredDepth = 15; // Change this to 5 or 6 for a "very big" tree

    // Automatically generate the tree
    Node* root = build_large_tree(desiredDepth, nodeCounter);
    cout << "Terminal Visualization:" << endl;
    display_tree(root);
    return 0;
}
