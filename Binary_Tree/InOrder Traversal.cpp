#include <iostream>
using namespace std;
 
struct Node {
    int data;
    struct Node *left_child, *right_child;
    Node(int data)
    {
        this->data = data;
        left_child = right_child = NULL;
    }
};

void printInorder(struct Node* node)
{
    if (node == NULL)
        return;
 
    printInorder(node->left_child);
 
    cout << node->data << " ";
 
    printInorder(node->right_child);
}

int main() {
    struct Node* root = new Node(12);
    root->left_child = new Node(24);
    root->right_child = new Node(38);
    root->left_child->left_child = new Node(49);
    root->left_child->right_child = new Node(56);
 
    cout << "\nPreorder traversal :\n";
    printInorder(root);
 
    
 
    return 0;
}