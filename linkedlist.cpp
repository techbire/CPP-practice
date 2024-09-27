// #include <bits/stdc++.h>
// using namespace std;

// // Printing Node class
// class node {
// public:
//     int val;
//     node* next;
//     //this is contructor method
//     node(int val) {
//         this->val = val;
//         this->next = NULL;
//     }
// };

// // Linked list class
// class linkedlist {
// public:
//     node* head;
//     node* tail;
//     int size;

//     linkedlist() {
//         head = tail = NULL;
//         size = 0;
//     }

//     // Insert at end function
//     void insertatend(int val) {
//         node* temp = new node(val);
//         if (size == 0) {
//             head = tail = temp;
//         } else {
//             tail->next = temp;
//             tail = temp;
//         }
//         size++;
//     }

//     // Insert at head function
//     void insertathead(int val) {
//         node* temp = new node(val);
//         if (size == 0) {
//             head = tail = temp;
//         } else {
//             temp->next = head;
//             head = temp;
//         }
//         size++;
//     }

//     // Insert at a specific index
//     void insertatindex(int index, int val) {
//         if (index < 0 || index > size) {
//             cout << "invalid index" << endl;
//             return;
//         } else if (index == 0) {
//             insertathead(val);
//         } else if (index == size) {
//             insertatend(val);
//         } else {
//             node* t = new node(val);
//             node* temp = head;
//             for (int i = 1; i < index; i++) {
//                 temp = temp->next;
//             }
//             t->next = temp->next;
//             temp->next = t;
//             size++;
//         }
//     }

//     // Delete at head function
// //approach- delete at head : 
// //                 if size==0--> list is empty
// //                 if size==1--> head=tail=NULL;size--;
// //                 if size>=1-->head=head.next;size--;

//     void deleteathead() {
//         if (size == 0) {
//             cout << "list is empty" << endl;
//             return;
//         } else {
//             node* temp = head;
//             head = head->next;
//             delete temp;
//             size--;
//         }
//     }

//     // Delete at tail function
//     void deleteattail() {
//         if (size == 0) {
//             cout << "list is empty" << endl;
//             return;
//         }
//         node* temp = head;
//         while (temp->next != tail) {
//             temp = temp->next;
//         }
//         delete tail;
//         temp->next = NULL;
//         tail = temp;
//         size--;
//     }

//     // Delete at index
//     void deleteatindex(int index){
//         if(size==0){
//             cout<<"List is empty!";
//             return;
//         }
//         else if(index<0 || index>=size){
//             cout<<"Invalid index";
//             return;
//         }
//         else if(index==0) return deleteathead();
//         else if(index==size-1) return deleteattail();
//         else{
//             node* temp=head;
//             for(int i=1;i<=index-1;i++){
//                 temp=temp->next;
//             }
//             temp->next=temp->next->next;
//             size--;
//         }
//     }

//     // Display the linked list
//     void display() {
//         node* temp = head;
//         while (temp != NULL) {
//             cout << temp->val << " ";
//             temp = temp->next;
//         }
//         cout << endl;
//     }
// };

// // Main function
// int main() {
//     linkedlist ll;
    
//     ll.insertatend(10);   // {10->NULL}
//     ll.display();         // Output: 10

//     ll.insertatend(20);   // {10->20->NULL}
//     ll.display();         // Output: 10 20

//     ll.insertatend(30);   // {10->20->30->NULL}
//     ll.insertatend(40);   // {10->20->30->40->NULL}
//     ll.display();         // Output: 10 20 30 40

//     ll.insertathead(50);  // {50->10->20->30->40->NULL}
//     ll.display();         // Output: 50 10 20 30 40

//     ll.insertathead(24);  // {24->50->10->20->30->40->NULL}
//     ll.display();         // Output: 24 50 10 20 30 40

//     ll.insertatindex(4, 80); // {24->50->10->20->80->30->40->NULL}
//     ll.display();            // Output: 24 50 10 20 80 30 40

//     ll.deleteathead();     // Remove 24
//     ll.display();          // Output: 50 10 20 80 30 40

//     ll.deleteattail();     // Remove 40
//     ll.display();          // Output: 50 10 20 80 30

//     ll.deleteatindex(3);   // Output: 50 10 20 30
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
