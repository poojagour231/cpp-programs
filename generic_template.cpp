//Implement a program that uses class templates to create a generic binary tree data 
//structure. 
#include <iostream>
using namespace std;

template <typename T>
class Node {
public:
    T data;
    Node* left;
    Node* right;

    Node(T val) {
        data = val;
        left = right = nullptr;
    }
};

template <typename T>
class BinaryTree {
public:
    Node<T>* root;

    BinaryTree() { root = nullptr; }

    void insert(Node<T>*& node, T val) {
        if (!node)
            node = new Node<T>(val);
        else if (val < node->data)
            insert(node->left, val);
        else
            insert(node->right, val);
    }

    void inorder(Node<T>* node) {
        if (node) {
            inorder(node->left);
            cout << node->data << " ";
            inorder(node->right);
        }
    }
};

int main() {
    BinaryTree<int> tree;
    tree.insert(tree.root, 10);
    tree.insert(tree.root, 5);
    tree.insert(tree.root, 15);

    cout << "Inorder: ";
    tree.inorder(tree.root);  // Output: 5 10 15

    return 0;
}
