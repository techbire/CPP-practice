#include<iostream>
using namespace std;

struct node {
    int val;
    struct node* left;
    struct node* right;
};

//Create Node

node* createNode(int val) {
    node* n = new node(); 
    n->val = val;
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
        if (prev != NULL && root->val <= prev->val) {
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
    if(key==root->val){
        return root;
    }
    else if(key<root->val){
        return search(root->left,key);
    }
    else{
        return search(root->right,key);
    }
}

// // searching {iteration method}
// node* search(node* root,int key){
//     while(root!=nullptr){
//         if(key==root->val)return root;
//         else if(key<root->val){
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
        if (key == root->val) {
            return;
        } else if (key < root->val) {
            root = root->left;
        } else {
            root = root->right;
        }
    }

    node* newNode = createNode(key);
    if (key < prev->val) {
        prev->left = newNode;
    } else {
        prev->right = newNode;
    }
}


node* findMin(node* root) {
    while (root->left != nullptr) {
        root = root->left;
    }
    return root;
}

node* deleteNode(node* root, int key) {
    if (root == nullptr) {
        return root;  // If the tree is empty, return null
    }

    if (key < root->val) {
        root->left = deleteNode(root->left, key);  // Go to the left subtree
    } else if (key > root->val) {
        root->right = deleteNode(root->right, key);  // Go to the right subtree
    } else {
        // Node with the key found

        // Case 1: Node with only one child or no child
        if (root->left == nullptr) {
            node* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == nullptr) {
            node* temp = root->left;
            delete root;
            return temp;
        }

        // Case 2: Node with two children
        node* temp = findMin(root->right);  // Find the in-order successor

        root->val = temp->val;  // Replace val of the node with the successor's val

        root->right = deleteNode(root->right, temp->val);  // Delete the successor
    }

    return root;
}


//Display ka code binary trees se
void displayTree(node* root) {
    if (root == nullptr) return;
    cout << root->val << " ";
    displayTree(root->left);
    displayTree(root->right);
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



    displayTree(p);
    printf("\n");

    // Check if the tree is a BST
    if (isBST(p)) {
        cout << "This is a BST" << endl;
    } else {
        cout << "This is not a BST" << endl;
    }

    // Check if the element is found or not
    node* n=search(p,6);

    if (n != nullptr) {
        cout << "found " << n->val << endl;
    } else {
        cout << "element not found!!" << endl;
    }

    // Insertion 
    insert(p,7);
    cout<<p->right->right->val;  //run hone pe 7 show karega!

    // Deletion
    deleteNode(p,3);
    printf("\n");
    displayTree(p);

    return 0;

}



//----------------------------------------------------------------------------------------------------------


