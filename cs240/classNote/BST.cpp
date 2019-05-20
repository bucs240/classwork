#include <iostream>

template<class T>
class BST
{
    private:
        template<class K>
        class Node
        {
            public:
                K data;
                Node *left, *right, *parent;
                public:
                Node(T d, Node* ptr)
                {
                    left=right=nullptr;
                    parent=ptr;
                }
        };
        Node * root;
        void insertNode(Node* n, T data)
        {
            if(n->data>data)
            {
                if(n->left ==NULL)
                [
                    n->left = new Node(data, n);
                ]
                else insertNode(n->left, data);
            }
            else if (n->data<data) {
                if(n->right ==NULL)
                [
                    n->right = new Node(data, n);
                ]
                else insertNode(n->right, data);
            }
            else
            {
                return NULL;
            }
            
        }
        Node * findRightMin(Node * n)
        {   
            if(n->left == NULL)return n;
            return findRightMin(n->left);
        }
        Node * findLeftMax(Node * n)
        {
            n=n->left
            while(n->right != NULL){
                n=n->right;
                return n;
                /* code */
            }
        }
        void promotion(Node * n)
        {
            //Node * r = findLeftMax(n);
            Node * r = findRightMin(n->right);
            n->data = r->data;
            if(r-left == NULL && r->right == NULL)
            {
                removeLeaf(r);
            }
            else
            {
                {shortCircuit(r)};
            }
            
        }

        void traverse(Node *n)// Deth first Search
        {
            if(n->left !=NULL)
            {
                cout<<n->data<<endl;
                traverse(n->left);
                traverse(n->right;
            }
           
                
        }

        void preorder(Node * n)
        {
            if(n!=NULL)
            {
                cout<<n->data<<endl;
                preorder(n->left);
                preorder(n->right;
            }
        }
        void inorder(Node * n)
        {
            if(n!=NULL)
            {
                inorder(n->left);
                cout<<n->data<<endl;
                inorder(n->right;
            }
        }
        void postorder(Node * n)
        {
            if(n!=NULL)
            {
                postorder(n->left);
                postorder(n->right;
                cout<<n->data<<endl;
            }
        }
    public:
    void insert(T data)
    {
        if (root == NULL)
        {
            root = new Node(data, NULL);
        }
        else
        {
            insertNode(root,data);
        }
        
    }
    bool find(T data)
    {
        if(root == NULL)return false;
        if(root->)
    }

    
        
}

/* Two case neeed:
/*    1: Base case
/*    2: Recusive case, always make progress toward base case
    */

/* Balance tree: no leaf is more than one level away from any other leafs.


/* Deth first Search
    Go left untill reach NULL
    Go right untill reach NULL and back to left*/
// Deep copy: preorder  Delete Tree: Postorder   Sorted Tree: inorder


/* Breath First Search
    Need to use Queue 
    First check the root "A" add A's children to the Queue

*/
/* Balance tree could give the benift of binary tree/
    Put all node of a tree into a array
    and grab the middle value as the root and spliting array into  two

    Recusive:
    Base case arg has style value

    insert(a[start/2])
    balance(a, start,(start+end)/2)-1
    balance(a,(start+end)/2)+1,end) 