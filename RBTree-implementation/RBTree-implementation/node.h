#pragma once

enum colour { RED, BLACK };

struct node {
    int data;                  // Data/Key value
    colour colour;             // Node colour
    node* leftChild;           // Left child pointer
    node* rightChild;          // Right child pointer
};