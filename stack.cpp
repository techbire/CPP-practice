#include<iostream>
using namespace std;

// class Stack {
// private:
//     int stack[100];  // Assuming a maximum stack size of 100
//     int top = -1; // Initially, the stack is empty

// public:
//     void push() {
//         if (top == 99) {  // Check for stack overflow
//             cout << "Overflow condition" << endl;
//         } else {
//             cout << "Enter the element: ";
//             int item;
//             cin >> item;
//             top++;
//             stack[top] = item;
//         }}

//     int pop() {
//         if (top == -1) {  // Check for stack underflow
//             cout << "Underflow condition" << endl;
//             return -1;  // Return a special value to indicate underflow
//         } else {
//             int item = stack[top];
//             top--;
//             return item;
//         }
//     }

//     void display() {
//         if (top == -1) {
//             cout << "Stack is empty" << endl;
//         } else {
//             cout << "Stack elements: ";
//             for (int i = top; i >= 0; i--) {
//                 cout << stack[i] << " ";
//             }
//             cout << endl;
//         }
//     }
// };

// int main() {
//     Stack s;
//     int choice;

//     while (true) {
//         cout << "1. Push" << endl;
//         cout << "2. Pop" << endl;
//         cout << "3. Display" << endl;
//         cout << "4. Exit" << endl;
//         cout << "Enter your choice: ";
//         cin >> choice;

//         switch (choice) {
//         case 1:
//             s.push(); 
//             cout<<endl;  
//              cout<<"-------Added Successfully-------\n";
//              cout<<endl;
//              cout<<endl; 

//             break;
//         case 2:
//             s.pop();
//             cout<<endl; 
//              cout<<"-------Deleted Successfully-------\n";
//              cout<<endl;
//              cout<<endl; 

//             break;
//         case 3:
//             s.display();
//             cout<<endl;
//             cout<<"-------Displayed Successfully-------\n";
//             cout<<endl;
//             cout<<endl;
//             break;
//         case 4:
//         cout<<"-------Quit Successfully-------\n";
//         cout<<endl;
//         cout<<endl;
//             exit(0); 
//         default:
//             cout << "Invalid choice" << endl;
//             cout<<endl; 
//             cout<<endl; 
//         }
//     }

//     return 0;
// }


// cpp


struct Node {
    int data;
    Node *next;
};

class Stack {
private:
    Node *top;

public:
    Stack() {
        top = NULL;
    }

    void push(int val) {
        Node *newNode = new Node;
        newNode->data = val;
        newNode->next = top;
        top = newNode;
    }

    int pop() {
        if (top == NULL) {
            cout << "Stack underflow" << endl;
            return -1;  // Return a special value to indicate underflow
        } else {
            int poppedValue = top->data;
            Node *temp = top;
            top = top->next;
            delete temp;
            return poppedValue;
        }
    }

    void display() {
        if (top == NULL) {
            cout << "Stack is empty" << endl;
        } else {
            Node *ptr = top;
            cout << "Stack elements: ";
            while (ptr != NULL) {
                cout << ptr->data << " ";
                ptr = ptr->next;
            }
            cout << endl;
        }
    }
};

int main() {
    Stack s;
    int choice;

    while (true) {
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            int val;
            cout << "Enter the value to push: ";
            cin >> val;
            s.push(val);
            break;
        case 2:
            s.pop();
            break;
        case 3:
            s.display();
            break;
        case 4:
            exit(0);  // To terminate the program
        default:
            cout << "Invalid choice" << endl;
        }
    }

    return 0;
}