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
class node {
public:
    int val;
    node* next;

    node(int val) {  // Constructor
        this->val = val;
        this->next = NULL;
    }
};

// Queue using a linked list
class Queue {
public:
    node* head;
    node* tail;
    int size;

    Queue() {
        head = tail = NULL;
        size = 0;
    }

    // Insert at end
    void push(int val) {
        node* temp = new node(val);
        if (size == 0) {
            head = tail = temp;
        } else {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }

    // Delete at head
    void pop() {
        if (size == 0) {
            cout << "queue is empty" << endl;
        } else {
            node* temp = head;  // Temporary node to delete the current head
            head = head->next;
            delete temp;  // Free the memory of the old head
            size--;
            if (size == 0) {
                tail = NULL;  // If queue becomes empty, reset tail too
            }
        }
    }

    // Return front value
    int front() {
        if (size == 0) {
            cout << "queue is empty" << endl;
            return -1;  // Return -1 if queue is empty
        }
        return head->val;
    }

    // Return back value
    int back() {
        if (size == 0) {
            cout << "queue is empty" << endl;
            return -1;
        }
        return tail->val;
    }

    // Display all elements
    void display() {
        node* temp = head;
        while (temp != NULL) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    // Check if queue is empty
    bool empty() {
        return size == 0;
    }

    // Return size of the queue
    int getSize() {
        return size;
    }
};

// Main function
int main() {
    Queue qOps;
    qOps.push(10);
    qOps.push(20);
    qOps.push(30);
    
    qOps.display();
    cout << "Front: " << qOps.front() << endl;
    cout << "Back: " << qOps.back() << endl;
    cout << "Size: " << qOps.getSize() << endl;

    qOps.pop();
    qOps.display();
    cout << "Front: " << qOps.front() << endl;
    cout << "Size: " << qOps.getSize() << endl;

    qOps.pop();
    qOps.pop();
    qOps.pop();  // Trying to pop when the queue is empty

    return 0;
}
