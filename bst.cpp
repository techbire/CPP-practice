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
bool isBST(node* root) {
    static node* prev = NULL;
    if (root != NULL) {
        if (!isBST(root->left)) {
            return false;
        }
        if (prev != NULL && root->data <= prev->data) {
            return false;
        }
        prev = root;
        return isBST(root->right);
    }
    return true;
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


void insert(node* root, int key) {
    node* prev = nullptr;
    while (root != nullptr) {
        prev = root;
        if (key == root->data) {
            return;
        } else if (key < root->data) {
            root = root->left;
        } else {
            root = root->right;
        }
    }

    node* newNode = createNode(key);
    if (key < prev->data) {
        prev->left = newNode;
    } else {
        prev->right = newNode;
    }
}

struct node *deletenode(struct node *root, int value){
    if(value<root->data){
        deletenode(root->left,value);
        else
    }
}


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

    if (n != nullptr) {
        cout << "found " << n->data << endl;
    } else {
        cout << "element not found!!" << endl;
    }

    insert(p,7);
    cout<<p->right->right->data;  //run hone pe 7 show karega!

    return 0;

}



//----------------------------------------------------------------------------------------------------------


