// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int val;
//     node* next;
//     node(int val){
//         this->val=val;
//         this->next=NULL;
//     }
// };

// void display(node* head){
//     while(head!=NULL){
//         cout<<head->val<<" ";
//         head=head->next;
//     }
//     cout<<endl;
// }

// node* deletenode(node* head, node* tar){      //logic for deleting the linkedlist
//     if(head==tar){
//         head=head->next;
//         return head;
//     }
//     node* temp=head;
//     while(temp->next!=tar){
//         temp=temp->next;
//     }
//     temp->next=temp->next->next;
// }    

// int main(){
//    node* a= new node(10);
//    node* b= new node(20);
//    node* c= new node(30);
//    node* d= new node(40);
//    node* e= new node(50);

//    a->next=b;
//    b->next=c;
//    c->next=d;
//    d->next=e;
//    node* head=a;
//    deletenode(a,c);
//    display(a);
// }

// // we have to delete c node;








//----------------------------------------------------------------------------------------
//logic for remove duplicates from sorted list

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
    }
};