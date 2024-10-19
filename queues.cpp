#include<bits/stdc++.h>
using namespace std;


//-----------------------------------------------------------------
//normal jhan pehchan

// int main(){
//     queue<int>q;
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.pop();
//     cout<<q.size();
//     cout<<endl;
//     while(!q.empty()){
//         cout<<q.front()<<" ";
//         q.pop();
//     }
// }


//-----------------------------------------------------------------
//queue operation

// class QueueOperations {
//     queue<int> q;

// public:
//     void push(int x) {
//         q.push(x);
//         cout << x << " pushed into the queue." << endl;
//     }

//     void pop() {
//         if(q.empty()) cout << "Queue is empty, cannot pop." << endl;
//         else {
//             cout << q.front() << " popped from the queue." << endl;
//             q.pop();
//         }
//     }

//     void display() {
//         if(q.empty()) cout << "Queue is empty." << endl;
//         else {
//             queue<int> temp = q;
//             while(!temp.empty()) {
//                 cout << temp.front() << " ";
//                 temp.pop();
//             }
//             cout << endl;
//         }
//     }

//     void size() {
//         cout << "Queue size: " << q.size() << endl;
//     }

//     void empty() {
//         if(q.empty()) cout << "Queue is empty." << endl;
//         else cout << "Queue is not empty." << endl;
//     }
// };

// int main() {
//     QueueOperations qOps;
//     qOps.push(10);
//     qOps.push(20);
//     qOps.push(30);
    
//     qOps.display();
//     qOps.size();
//     qOps.empty();

//     qOps.pop();
//     qOps.display();
//     qOps.size();
//     qOps.empty();

//     qOps.pop();
//     qOps.pop();
//     qOps.pop();

//     return 0;
// }


//-----------------------------------------------------------------
//queue using LinkedList
// class node {
// public:
//     int val;
//     node* next;

//     node(int val) {  // Constructor
//         this->val = val;
//         this->next = NULL;
//     }
// };

// // Queue using a linked list
// class Queue {
// public:
//     node* head;
//     node* tail;
//     int size;

//     Queue() {
//         head = tail = NULL;
//         size = 0;
//     }

//     // Insert at end
//     void push(int val) {
//         node* temp = new node(val);
//         if (size == 0) {
//             head = tail = temp;
//         } else {
//             tail->next = temp;
//             tail = temp;
//         }
//         size++;
//     }

//     // Delete at head
//     void pop() {
//         if (size == 0) {
//             cout << "queue is empty" << endl;
//         } else {
//             node* temp = head;  // Temporary node to delete the current head
//             head = head->next;
//             delete temp;  // Free the memory of the old head
//             size--;
//             if (size == 0) {
//                 tail = NULL;  // If queue becomes empty, reset tail too
//             }
//         }
//     }

//     // Return front value
//     int front() {
//         if (size == 0) {
//             cout << "queue is empty" << endl;
//             return -1;  // Return -1 if queue is empty
//         }
//         return head->val;
//     }

//     // Return back value
//     int back() {
//         if (size == 0) {
//             cout << "queue is empty" << endl;
//             return -1;
//         }
//         return tail->val;
//     }

//     // Display all elements
//     void display() {
//         node* temp = head;
//         while (temp != NULL) {
//             cout << temp->val << " ";
//             temp = temp->next;
//         }
//         cout << endl;
//     }

//     // Check if queue is empty
//     bool empty() {
//         return size == 0;
//     }

//     // Return size of the queue
//     int getSize() {
//         return size;
//     }
// };

// // Main function
// int main() {
//     Queue qOps;
//     qOps.push(10);
//     qOps.push(20);
//     qOps.push(30);
    
//     qOps.display();
//     cout << "Front: " << qOps.front() << endl;
//     cout << "Back: " << qOps.back() << endl;
//     cout << "Size: " << qOps.getSize() << endl;

//     qOps.pop();
//     qOps.display();
//     cout << "Front: " << qOps.front() << endl;
//     cout << "Size: " << qOps.getSize() << endl;

//     qOps.pop();
//     qOps.pop();
//     qOps.pop();  // Trying to pop when the queue is empty

//     return 0;
// }





//-----------------------------------------------------------------

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

// Linked list class
class Deque {
public:
    node* head;
    node* tail;
    int size;

    Deque() {
        head = tail = NULL;
        size = 0;
    }

    // Insert at end function
    void pushback(int val) {
        node* temp = new node(val);
        if (size == 0) {
            head = tail = temp;
        } else {
            tail->next = temp;
            temp->prev=tail; //extra
            tail = temp;
        }
        size++;
    }

    // Insert at head function
    void pushfront(int val) {
        node* temp = new node(val);
        if (size == 0) {
            head = tail = temp;
        } else {
            temp->next = head;
            head->prev=temp;
            head = temp;
        }
        size++;
    }
    // Delete at head function
//approach- delete at head : 
//                 if size==0--> list is empty
//                 if size==1--> head=tail=NULL;size--;
//                 if size>=1-->head=head.next;size--;

    void popfront() {
        if (size == 0) {
            cout << "list is empty" << endl;
            return;
        } 
        head=head->next;
        if(head)head->prev=nullptr;
        if(head==nullptr)tail=nullptr;  //extra
            size--;
        }

    // Delete at tail function
    void popback() {
        if (size == 0) {
            cout << "list is empty" << endl;
            return;
        }
        else if(size==1){   //extra
            popfront();
            return;
        }

        node* temp = tail->prev;
        temp->next=nullptr;
        tail=temp;
        size--;
        }

int front(){
    if(size==0){
        cout<<"Queue is empty!"<<endl;
        return -1;
    }
    return head->val;
}

int back(){
    if(size==0){
        cout<<"Queue is empty!"<<endl;
        return -1;
    }
    return tail->val;
}

bool empty(){
    if(size==0)return true;
    else return false;
}

    // Display the linked list
    void display() {
        node* temp = head;
        while (temp != NULL) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main(){
  Deque dq;
  dq.pushback(10);  
  dq.pushback(20);
  dq.pushback(30);
  dq.pushback(40);
  dq.display();
  dq.popback();
  dq.display();
  dq.popfront();
  dq.display();
  dq.pushfront(50);
  dq.display();
  cout<<dq.front()<<endl;
  cout<<dq.back();
}