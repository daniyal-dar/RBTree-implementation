#pragma once
#include "node.h"

template<typename T>
class RBT {
private:
    node<T>* root;                                  // Root pointer of the Red-Black Tree

    // Private helper functions
    node<T>* getParent(node<T>* current);          // Returns parent of given node
    void destroyTree(node<T>* current);            // Recursively deletes all nodes
    void preorderHelper(node<T>* current);         // Preorder traversal helper (Root, Left, Right)
    void postorderHelper(node<T>* current);        // Postorder traversal helper (Left, Right, Root)
    void inorderHelper(node<T>* current);          // Inorder traversal helper (Left, Root, Right)
    void recolor(node<T>* current);                // Changes colors to fix Red-Black properties
    void restructure(node<T>* current);            // Performs rotations and color changes for balancing

    // Additional RBT helper functions
    node* createNode(T value);                     // creates node
    void leftRotate(node<T>* current);             // Left rotation around given node
    void rightRotate(node<T>* current);            // Right rotation around given node
    void fixInsert(node<T>* current);              // Fixes violations after insertion
    void fixDelete(node<T>* current);              // Fixes violations after deletion
    node<T>* findNode(T value);                    // Returns node with specified value
    node<T>* getUncle(node<T>* current);           // Returns uncle of given node
    node<T>* getSibling(node<T>* current);         // Returns sibling of given node
    void transplant(node<T>* u, node<T>* v);       // Replaces subtree u with subtree v
    node<T>* getMinimum(node<T>* current);         // Returns node with minimum value in subtree
    void deleteNode(node<T>* current);             // Removes specific node from tree

public:
    // Constructor & Destructor
    RBT();                                          // Initializes empty Red-Black Tree
    ~RBT();                                         // Cleans up all nodes and frees memory

    // Public operations
    bool isEmpty();                                 // Checks if tree is empty
    void insert(T value);                           // Inserts value into tree
    void deleteValue(T value);                      // Deletes value from tree
    bool search(T value);                           // Searches for value in tree
    void displayInorder();                          // Displays tree inorder (sorted order)
    void displayPreorder();                         // Displays tree preorder
    void displayPostorder();                        // Displays tree postorder
};