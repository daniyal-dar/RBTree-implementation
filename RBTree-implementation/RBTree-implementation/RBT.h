#pragma once
#include "node.h"

class RBT {
private:
    node* root;                                     // Root pointer of the Red-Black Tree

    // Private helper functions
    node* getParent(node* current);                // Returns parent of given node
    node* getParent(node* p, node* child);         // Searches parent dynamically from a root pointer
    void destroyTree(node* current);               // Recursively deletes all nodes
    void preorderHelper(node* current);            // Preorder traversal helper (Root, Left, Right)
    void postorderHelper(node* current);           // Postorder traversal helper (Left, Right, Root)
    void inorderHelper(node* current);             // Inorder traversal helper (Left, Root, Right)
    void recolor(node* current);                   // Changes colours to fix Red-Black properties
    void restructure(node* current);               // Performs rotations and colour changes for balancing

    // Additional RBT helper functions
    node* createNode(int value);                   // creates node
    void leftRotate(node* current);                // Left rotation around given node
    void rightRotate(node* current);               // Right rotation around given node
    void fixInsert(node* current);                 // Fixes violations after insertion
    void fixDelete(node* x, node* xParent, bool xIsLeftChild); // Fixes violations after deletion
    node* findNode(node* p, int value);            // Internal recursive search helper
    node* findNode(int value);                     // Returns node with specified value
    node* getUncle(node* current);                 // Returns uncle of given node
    node* getSibling(node* current);               // Returns sibling of given node
    void transplant(node* u, node* v);             // Replaces subtree u with subtree v
    node* getMinimum(node* current);               // Returns node with minimum value in subtree
    void deleteNode(node* current);                // Removes specific node from tree

    // Utility helpers mapped from reference logic
    colour getColour(node* p);                     // Safely reads colour handling null pointers
    void setColour(node* p, colour c);             // Safely updates a node's colour
    node* getGrandParent(node* child);             // Safely determines grandparent node
    node* insertHelper(node* p, int value, node*& inserted); // Performs binary tree insertion

public:
    // Constructor & Destructor
    RBT();                                          // Initializes empty Red-Black Tree
    ~RBT();                                         // Cleans up all nodes and frees memory

    // Public operations
    bool isEmpty();                                 // Checks if tree is empty
    void insert(int value);                         // Inserts value into tree
    void deleteValue(int value);                    // Deletes value from tree
    bool search(int value);                         // Searches for value in tree
    void displayInorder();                          // Displays tree inorder (sorted order)
    void displayPreorder();                         // Displays tree preorder
    void displayPostorder();                        // Displays tree postorder
};