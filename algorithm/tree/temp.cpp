#include <iostream>
using namespace std;

// Definition of the Tree Node
struct Node {
    int   data;
    Node* left;
    Node* right;

    Node(int val) {
        data  = val;
        left  = NULL;
        right = NULL;
    }
};

// Function to Insert a node
Node* insert(Node* root, int val) {
    if (root == NULL) {
        return new Node(val);
    }
    if (val < root->data) {
        root->left = insert(root->left, val);
    } else {
        root->right = insert(root->right, val);
    }
    return root;
}

// Function to find the minimum value node (helper for deletion)
Node* minValueNode(Node* node) {
    Node* current = node;
    while (current && current->left != NULL)
        current = current->left;
    return current;
}

// Function to Delete a node
Node* deleteNode(Node* root, int key) {
    if (root == NULL)
        return root;

    // Navigate to the node to be deleted
    if (key < root->data) {
        root->left = deleteNode(root->left, key);
    } else if (key > root->data) {
        root->right = deleteNode(root->right, key);
    } else {
        // Node found.

        // Case 1: Node with only one child or no child
        if (root->left == NULL) {
            Node* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == NULL) {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        // Case 2: Node with two children
        // Get the inorder successor (smallest in the right subtree)
        Node* temp = minValueNode(root->right);

        // Copy the inorder successor's content to this node
        root->data = temp->data;

        // Delete the inorder successor
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

// Function to print the tree (In-order traversal: Left -> Root -> Right)
void inorder(Node* root) {
    if (root != NULL) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

int main() {
    Node* root = NULL;

    // 1. Create Tree with given data
    int values[] = {12, 23, 34, 45, 56, 67, 78, 89, 90};
    ;
    for (int val : values) {
        root = insert(root, val);
    }

    cout << "Initial Tree (In-order): ";
    inorder(root);
    cout << endl;

    // // 2. Insert Node 25
    // cout << "\nInserting 25..." << endl;
    // root = insert(root, 25);
    // cout << "Tree after inserting 25: ";
    // inorder(root);
    // cout << endl;

    // // 3. Delete Node 50
    // cout << "\nDeleting 50..." << endl;
    // root = deleteNode(root, 70);
    // cout << "Tree after deleting 50:  ";
    // inorder(root);
    // cout << endl;

    return 0;
}
