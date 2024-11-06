#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val=val;
        this->left=nullptr;
        this->right=nullptr;

    }
};
void displayTree(Node* root){   
    if(root==nullptr)return;
    cout<<root->val<<" ";
    displayTree(root->left);
    displayTree(root->right);
}

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

int size(Node* root){
    if(root==nullptr)return 0;
    return 1+size(root->left)+size(root->right);
}

int maxtree(Node* root){
    if(root==nullptr)return INT_MIN;
    int lmax=maxtree(root->left);
    int rmax=maxtree(root->right);
    return max(root->val,max(lmax,rmax));

}

int levels(Node* root){
    if(root==nullptr)return 0;
    return 1+max(levels(root->left),levels(root->right));    
}


//both sum function is ok

int main(){
    Node* a=new Node(1);  //root
    Node* b=new Node(2);
    Node* c=new Node(3);
    Node* d=new Node(4);
    Node* e=new Node(5);
    Node* f=new Node(6);
    Node* g=new Node(7);

    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    displayTree(a);
    cout<<endl;
    cout<<sum(a)<<endl;
    cout<<size(a)<<endl;
    cout<<maxtree(a)<<endl;
    cout<<levels(a)<<endl;
}