#include<iostream>
using namespace std;

struct node {
    int data;
    struct node* left;
    struct node* right;
};

//Create Node

node* createNode(int data) {
    node* n = new node(); 
    n->data = data;
    n->left = NULL; 
    n->right = NULL;
    return n; 
}

// Checking if a binary tree is a binary search tree or not!
int isBST(node* root) {
    static node* prev = NULL; // Static variable to track the previous node
    if (root != NULL) {
        // Check the left subtree
        if (!isBST(root->left)) {
            return 0;
        }
        // Check the current node's value against the previous node's value
        if (prev != NULL && root->data <= prev->data) {
            return 0; // If the current node is not greater than the previous, return false
        }
        prev = root; // Update the previous node

        // Check the right subtree
        return isBST(root->right);
    } else {
        return 1; // If the node is NULL, it's a valid BST
    }
}


//{searching} Checking if element of binary tree is present or not!
node* search(node* root,int key){
    if(root==nullptr)return nullptr;
    if(key==root->data){
        return root;
    }
    else if(key<root->data){
        return search(root->left,key);
    }
    else{
        return search(root->right,key);
    }
}

// // searching {iteration method}
// node* search(node* root,int key){
//     while(root!=nullptr){
//         if(key==root->data)return root;
//         else if(key<root->data){
//             root=root->left;
//         }
//         else{
//             root=root->right;
//         }
//     }
//     return nullptr;
// }


int main() {
    // Constructing the tree using the createNode function
    node* p = createNode(5);
    node* p1 = createNode(3);
    node* p2 = createNode(6);
    node* p3 = createNode(1);
    node* p4 = createNode(4);

    // Constructing the tree:
    //      5
    //     / \
    //    3   6
    //   / \
    //  1   4  

    // Linking nodes
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    // Check if the tree is a BST
    if (isBST(p)) {
        cout << "This is a BST" << endl;
    } else {
        cout << "This is not a BST" << endl;
    }

    // Check if the element is found or not
   node* n=search(p,6);
    if(n!=nullptr){
        cout<<"found",n->data;
    }
    else{
        cout<<"element not found!!";
    }
    return 0;

}



//----------------------------------------------------------------------------------------------------------


