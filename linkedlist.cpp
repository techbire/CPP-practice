//printing node

// #include<iostream>
// using namespace std;
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





//node pointer
//why pointer -traversing easy hoti hai above wali se!


// #include<iostream>
// using namespace std;
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



//linkedlist class

#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

class LinkedList {
public: // Make the LinkedList constructor public
    Node* head;
    Node* tail;
    int size;

    LinkedList() { // Constructor is now public
        head = tail = NULL;
        size = 0;
    }

    void insertAtEnd(int val) {
        Node* temp = new Node(val);
        if (size == 0) {
            head = tail = temp;
        } else {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }

    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList ll;
    ll.insertAtEnd(10);
    ll.insertAtEnd(20);
    ll.display();
    return 0;
}
