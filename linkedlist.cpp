#include <bits/stdc++.h>
using namespace std;

//--------------------------------------------------------------------


//printing node


// class Node{
// public:
//     int val;
//     Node* next;

//     //this is contructor method
//     // Node(int val){
//     // this->val=val;
//     // }

// };

// int main(){
//     //10 20 30 40 
//     Node a;
//     a.val=10;

// //we can also define simple with the help of constructor
// // Node a(10);


//     Node b;
//     b.val=20;
//     Node c;
//     c.val=30;
//     Node d;
//     d.val=40;

// //setting mutual addresing
// a.next=&b;
// b.next=&c;
// c.next=&d;
// d.next=NULL;


// Node temp =a;
// // while(temp.next!=NULL){
// //     cout<<temp.val;
// //     temp=*(temp.next);

// // } //this code will not include 40 because of NULL at d; so other method is looping infinite the break it when null comes;

// while(1){
//     cout<<temp.val<<" ";
//     if(temp.next==NULL) break;
//     temp= *(temp.next);
// }
// // output>>10 20 30 40

// }



//--------------------------------------------------------------------

//node pointer
//why pointer -traversing easy hoti hai above wali se!


// class Node{
//     public:
//     int val;
//     Node* next;
//     Node(int val){
//         this->val=val;
//         this->next=NULL;
//     }
// };

// //method-3
// void display(Node* head){
//     Node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->val<<" ";
//         temp=temp->next;
//     }
// }


// int main(){
//     Node* a=new Node(10);
//     Node* b=new Node(20);
//     Node* c=new Node(30);
//     Node* d=new Node(40);
//     a->next=b;
//     b->next=c;
//     c->next=d;
//     Node* temp=a;
//     // while(temp!=NULL){
//     //     cout<<temp->val<<" ";
//     //     temp=temp->next;
//     // }//method-1

//     //method-2
//     // cout<<a->next->next->next->val;

// //method-3 ko recalling hoga
// display(a);
    
// }


//--------------------------------------------------------------------

//insert at end linkedlist class

// class node {
// public:
//     int val;
//     node* next;
//     node(int val) {
//         this->val = val;
//         this->next = NULL;
//     }
// };

// class linkedlist {
// public: // Make the LinkedList constructor public
//     node* head;
//     node* tail;
//     int size;

//     linkedlist() { // Constructor is now public
//         head = tail = NULL;
//         size = 0;
//     }

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

//     void display() {
//         node* temp = head;
//         while (temp != NULL) {
//             cout << temp->val << " ";
//             temp = temp->next;
//         }
//         cout << endl;
//     }
// };

// int main() {
//     linkedlist ll;
//     ll.insertatend(10);
//     ll.insertatend(20);
//     ll.display();
//     return 0;
// }

// --------------------------------------------------------------------



//insertion the node at the beginning of linkedlist
// struct node{
//     int data;
//     node* next;
//     node(int new_data){
//         data=new_data;
//         next=nullptr;
//     }
// };


// node* insertatfront(node* head, int new_data){
//     node* new_node = new node(new_data);
//     new_node->next=head;
//     return new_node;
// }

// void printlist(node* head){
//     node* curr=head;
//     while(curr !=nullptr){
//         cout<<" "<<curr->data;
//         curr=curr->next;
//     }
//     cout<<endl;

// }

// int main(){
//     node* head=new node(2);
//     head->next=new node(3);
//     head->next->next=new node(4);
//     head->next->next=new node(5);
//     cout<<"original linkedlist: ";
//     printlist(head);
//     cout<<"after inserting linkedlist: ";
//     int data=1;
//     head=insertatfront(head,data);
//     printlist(head);
// }



//--------------------------------------------------------------------

//double linkedlist 
 
struct link {
    int data;
    struct link* next;
    struct link* prev;
};

struct link* start = NULL;
struct link* current = NULL;
struct link* node = NULL;

void create() {
    int n;
    cout << "How many nodes you want to create: ";
    cin >> n;
    cout << "Enter the elements: ";
    
    for (int i = 0; i < n; i++) {
        node = new link();  // Use 'new' to allocate memory
        cin >> node->data;
        node->next = NULL;  // Set the next pointer to NULL
        node->prev = NULL;

        if (start == NULL) {
            start = node;    // Initialize start if it's the first node
            current = node;
        } else {
            current->next = node;  // Link the previous node to the new node
            node->prev = current;  // Set the previous pointer of the new node
            current = node;        // Move the current pointer forward
        }
    }
}

void display() {
    struct link* ptr = start;
    cout << "List elements: ";
    while (ptr != NULL) {
        cout << ptr->data << " ";  // Add a space to separate elements
        ptr = ptr->next;
    }
    cout << endl;
}

int main() {
    create();
    display();
    return 0;
}
