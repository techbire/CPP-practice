#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node(int val) {
        this->val = val;
        this->left = nullptr;
        this->right = nullptr;
    }
};



// Display the tree using Preorder traversal by default
void displayTree(Node* root) {
    if (root == nullptr) return;
    cout << root->val << " ";
    displayTree(root->left);
    displayTree(root->right);
}

// Sum of all nodes in the tree
// int sum(Node* root){
//     if(root==nullptr)return 0;
//     int leftSum=sum(root->left);
//     int rightSum=sum(root->right);
//     int ans=root->val+leftSum+rightSum;
//     return ans;
// }

// // compress version
int sum(Node* root){
    if(root==nullptr)return 0;
    return root->val+sum(root->left)+sum(root->right);
}

// Size of the tree (number of nodes)
int size(Node* root) {
    if (root == nullptr) return 0;
    return 1 + size(root->left) + size(root->right);
}

// Maximum value in the tree
int maxtree(Node* root) {
    if (root == nullptr) return INT_MIN;
    int lmax = maxtree(root->left);
    int rmax = maxtree(root->right);
    return max(root->val, max(lmax, rmax));
}

// Number of levels (height of the tree)
int levels(Node* root) {
    if (root == nullptr) return 0;
    return 1 + max(levels(root->left), levels(root->right));
}

// Preorder Traversal (Root -> Left -> Right)
void preorderTraversal(Node* root) {
    if (root == nullptr) return;
    cout << root->val << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

// Inorder Traversal (Left -> Root -> Right)
void inorderTraversal(Node* root) {
    if (root == nullptr) return;
    inorderTraversal(root->left);
    cout << root->val << " ";
    inorderTraversal(root->right);
}

// Postorder Traversal (Left -> Right -> Root)
void postorderTraversal(Node* root) {
    if (root == nullptr) return;
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout << root->val << " ";
}

int main() {
    Node* a = new Node(1);  // root
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

//aisa hi dikhta hai 
    //     1
    //    / \
    //   2   3
    //  / \ / \
    // 4  5 6  7



    // Display additional tree properties
    cout << "Sum of all nodes: " << sum(a) << endl;
    cout << "Size of the tree (number of nodes): " << size(a) << endl;
    cout << "Maximum value in the tree: " << maxtree(a) << endl;
    cout << "Number of levels (height of the tree): " << levels(a) << endl;

    // Display the tree using preorder traversal
    cout << "Preorder Traversal: ";
    preorderTraversal(a);
    cout << endl;

    // Display the tree using inorder traversal
    cout << "Inorder Traversal: ";
    inorderTraversal(a);
    cout << endl;

    // Display the tree using postorder traversal
    cout << "Postorder Traversal: ";
    postorderTraversal(a);
    cout << endl;


    return 0;
}
