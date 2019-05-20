#include <iostream>

template<class T>
class Node
{
    T data;
    Node *left, *right, *parent;
    public:
    Node(T d, Node* ptr)
    {
        left=right=nullptr;
        parent=ptr;
    }
    friend BST;
}
/* Two case neeed:
/*    1: Base case
/*    2: Recusive case, always make progress toward base case
    */