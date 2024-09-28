// #include <bits/stdc++.h>
// using namespace std;

// // Node class pointer ke sath - traversal asaan hota hai isse
// class Node {
// public:
//     int val;        // Node ka value store karta hai
//     Node* next;     // Next node ka pointer

//     // Constructor: Node initialize karta hai aur next ko NULL set karta hai
//     Node(int val) {
//         this->val = val;
//         this->next = NULL;
//     }
// };

// // Linked list ko display karne ka method
// // Approach: Head se start karke, list ko traverse karte hue values print karte hain
// void display(Node* head) {
//     Node* temp = head;
//     // Tip: List ko next pointer se traverse karke har node ka value print karte jao
//     while (temp != NULL) {
//         cout << temp->val << " ";
//         temp = temp->next;  // Next node par move karo
//     }
//     cout << endl; // Format ke liye new line
// }

// int main() {
//     // Dynamic memory allocation se nodes banaye gaye hain
//     Node* a = new Node(10);
//     Node* b = new Node(20);
//     Node* c = new Node(30);
//     Node* d = new Node(40);

//     // Nodes ko link kar rahe hain taaki ek chain ban jaye: a -> b -> c -> d -> NULL
//     a->next = b;
//     b->next = c;
//     c->next = d;

//     // Method 1: Linked list ko traverse karke display function se print karte hain
//     display(a);   // Output: 10 20 30 40

//     // Method 2: Direct nodes ko access karne ke liye pointer chaining use kar sakte ho
//     // Ye line uncomment karo agar specific node ka value access karna ho (example: 4th node)
//     // cout << a->next->next->next->val << endl;  // Output: 40

//     return 0;
// }



// -------------------------------------------------------------------------------------------------------------------------
//double linkedlist
#include<iostream>
using namespace std;
class node{
    public:
    int val;
    node* next;
    node* prev;  //extra for ddl
    node(int val){
        this->val=val;
        this->next=nullptr;
        this->prev=nullptr; //look there is both nullptr

    }
};



void display(node* head){
    while(head){
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}

void displayrev(node* tail){
    while(tail){
        cout<<tail->val<<" ";
        tail=tail->prev;
    }
    cout<<endl;
}

void displayrec(node* head){
    if(head==nullptr)return;
    cout<<head->val<<" ";
    displayrec(head->next);
   
}

void displayrecrev(node* head){
    if(head==nullptr) return;
    displayrecrev(head->next);
    cout<<head->val<<" ";
}




int main(){
    //10 20 30 40 50
    node* a= new node(10);
    node* b= new node(20);
    node* c= new node(30);
    node* d= new node(40);
    node* e= new node(50);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->prev = d;
    d->prev = c;
    c->prev = b;
    b->prev = a;

display(a);
displayrev(a);
displayrec(a);
displayrecrev(a);

}
