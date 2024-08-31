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


#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};

int main(){
    Node* a=new Node(10);
    Node* b=new Node(10);
    Node* c=new Node(10);
    Node* d=new Node(10);
    a->next=b;
    b->next=c;
    c->next=d;
    Node* temp=a;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }

    
}
