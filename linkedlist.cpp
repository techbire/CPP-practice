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


//     // Get at index function
// int getatindex(int index){
//     if(index<0||index>=size){
//         cout<<"Invalid Index";
//         return -1;
//     }
//     else if(index==0){
//         return head->val;
//     }
//     else if(index==size-1){
//         return tail->val;
//     }
//     else{
//         node* temp=head;
//         for(int i=1;i<index;i++){
//             temp=temp->next;
//         }
//         return temp->val;
//     }
// }

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
// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int val;
//     node* next;
//     node* prev;  //extra for ddl
//     node(int val){
//         this->val=val;
//         this->next=nullptr;
//         this->prev=nullptr; //look there is both nullptr

//     }
// };

// // Linked list class
// class dll {
// public:
//     node* head;
//     node* tail;
//     int size;

//     dll() {
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
//             temp->prev=tail; //extra
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
//             t->prev=temp;      //extra
//             t->next->prev=t;   //extra
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
//         } 
//         head=head->next;
//         if(head)head->prev=nullptr;
//         if(head==nullptr)tail=nullptr;  //extra
//             size--;
//         }

//     // Delete at tail function
//     void deleteattail() {
//         if (size == 0) {
//             cout << "list is empty" << endl;
//             return;
//         }
//         else if(size==1){   //extra
//             deleteathead();
//             return;
//         }

//         node* temp = tail->prev;
//         temp->next=nullptr;
//         tail=temp;
//         size--;
//         }

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
//             temp->next=temp->next->next;  //extra
//             temp->next->prev=temp;       //extra
//             size--;   
//         }
//     }


//     // Get at index function
// int getatindex(int index){
//     if(index<0||index>=size){
//         cout<<"Invalid Index";
//         return -1;
//     }
//     else if(index==0){
//         return head->val;
//     }
//     else if(index==size-1){
//         return tail->val;
//     }
//     else{
//         if(index<size/2){
//             node* temp=head;
//             for(int i=1;i<=index;i++){
//                 temp=temp->next;
//             }
//             return temp->val;
//         }
//         else{
//             node* temp=tail;
//             for(int i=1;i<size-index;i++){
//                 temp=temp->prev;
//             }
//             return temp->val;
//         }
    
//     }
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

// int main(){
//   dll list;
//   list.insertatend(10);
//   list.insertatend(20);
//   list.insertatend(30);
//   list.display();
//   list.insertatend(40);
//   list.display(); 
//   list.insertathead(50);
//   list.display();
//   list.insertatindex(2,60);
//   list.display();
//   list.deleteathead();
//   list.display();
//   list.deleteattail();
//   list.display();
//   list.insertatend(90);
//   list.display();
//   list.deleteatindex(3);
//   list.display();
//   cout<<list.getatindex(2);
// }




// -------------------------------------------------------------------------------------------------------------------------
// circular linkedlist insertion,deletion and reverse

#include <iostream>
using namespace std;

// Define the structure for a Node
struct Node {
    int data;
    Node* next;

    // Constructor to initialize the node with data
    Node(int x) {
        data = x;
        next = nullptr;
    }
};

// Function to insert a node at the end of the circular linked list
Node* insert(Node* head, int x) {
    Node* new_node = new Node(x);
    if (head == nullptr) {
        new_node->next = new_node; // Point to itself
        return new_node;           // New node is the only node
    }

    Node* temp = head;
    while (temp->next != head) {
        temp = temp->next;       // Traverse to the last node
    }

    temp->next = new_node;       // Link the last node to the new node
    new_node->next = head;       // Point new node to head
    return head;                 // Return the head of the list
}

// Function to delete a node from the circular linked list
Node* deleteNode(Node* head) {
    if (head == nullptr) {
        cout << "List is empty, nothing to delete." << endl;
        return nullptr;
    }

    if (head->next == head) {    // Only one node in the list
        delete head;
        return nullptr;
    }

    Node* temp = head;
    while (temp->next != head) {
        temp = temp->next;       // Traverse to the last node
    }

    Node* to_delete = head;      // Node to be deleted
    head = head->next;           // Move head to the next node
    temp->next = head;           // Last node points to new head
    delete to_delete;            // Free memory
    return head;                 // Return the new head of the list
}

// Function to display the circular linked list
void display(Node* head) {
    if (head == nullptr) {
        cout << "List is empty." << endl;
        return;
    }

    Node* temp = head;
    do {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != head);
    cout << "(back to head)" << endl; // Indicate circularity
}

// Function to reverse the circular linked list
Node* reverse(Node* head) {
    if (head == nullptr || head->next == head) {
        return head; // Nothing to reverse if empty or only one node
    }

    Node* prev = head;
    Node* current = head->next;
    Node* next = nullptr;

    while (current != head) {
        next = current->next;  // Store the next node
        current->next = prev;  // Reverse the current node's pointer
        prev = current;        // Move prev to current
        current = next;        // Move current to next
    }

    head->next = prev; // Update the head to point to the new first node
    return prev;       // Return the new head of the list
}

int main() {
    // Initialize head pointer
    Node* head = nullptr;

    // Insert nodes
    head = insert(head, 10);
    head = insert(head, 20);
    head = insert(head, 30);
    head = insert(head, 40);

    cout << "Circular linked list after insertions:" << endl;
    display(head);

    // Delete a node
    head = deleteNode(head);
    cout << "Circular linked list after deletion:" << endl;
    display(head);

    // Reverse the circular linked list
    head = reverse(head);
    cout << "Circular linked list after reversing:" << endl;
    display(head);

    return 0;
}
