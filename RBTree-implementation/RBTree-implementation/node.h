#pragma once


enum color { RED, BLACK };


template<typename T>
struct node {
    T data;                    // Data/Key value
    color color;               // Node color
    node* leftChild;           // Left child pointer
    node* rightChild;          // Right child pointer
};