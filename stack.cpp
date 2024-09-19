#include <iostream>
#include <cstring>
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





// struct Node {
//     int data;
//     Node *next;
// };

// class Stack {
// private:
//     Node *top;

// public:
//     Stack() {
//         top = NULL;
//     }

//     void push(int val) {
//         Node *newNode = new Node;
//         newNode->data = val;
//         newNode->next = top;
//         top = newNode;
//     }

//     int pop() {
//         if (top == NULL) {
//             cout << "Stack underflow" << endl;
//             return -1;  // Return a special value to indicate underflow
//         } else {
//             int poppedValue = top->data;
//             Node *temp = top;
//             top = top->next;
//             delete temp;
//             return poppedValue;
//         }
//     }

//     void display() {
//         if (top == NULL) {
//             cout << "Stack is empty" << endl;
//         } else {
//             Node *ptr = top;
//             cout << "Stack elements: ";
//             while (ptr != NULL) {
//                 cout << ptr->data << " ";
//                 ptr = ptr->next;
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
//             int val;
//             cout << "Enter the value to push: ";
//         default:
//             cout << "Invalid choice" << endl;
//         }
//     }

//     return 0;
// }

//           cin >> val;
//             s.push(val);
//             break;
//         case 2:
//             s.pop();
//             break;
//         case 3:
//             s.display();
//             break;
//         case 4:
//             exit(0);  // To terminate the program
  




//to convert an infix expression to a prefix expression using a stack

char infix[10], prefix[10], stack[10];
int length, pos = 0, top = -1;
char symbol, temp;

void push(char symbol) {
    top = top + 1;
    stack[top] = symbol;
}

char pop() {
    char sym = stack[top];
    top = top - 1;
    return sym;
}

int precedence(char symb) {
    switch(symb) {
        case '^': return 3;
        case '*':
        case '/': return 2;
        case '+':
        case '-': return 1;
        case '(': 
        case ')': return 0;
        case '#': return -1;
        default: return -1; // Handle unexpected cases
    }
}

void infixtoprefix(char infix[]) {
    length = strlen(infix);
    push('#');
    for(int i = length - 1; i >= 0; i--) {
        symbol = infix[i];
        switch(symbol) {
            case ')': 
                push(symbol);
                break;
            case '(':
                while((temp = pop()) != ')') {
                    prefix[pos++] = temp;
                }
                break;
            case '+':
            case '-':
            case '*':
            case '/':
            case '^':
                while(precedence(stack[top]) > precedence(symbol)) {
                    temp = pop();
                    prefix[pos++] = temp;
                }
                push(symbol);
                break;
            default:
                prefix[pos++] = symbol;
                break;
        }
    }
    
    while(top > -1) {
        temp = pop();
        prefix[pos++] = temp;
    }
    
    // Reverse the prefix array to get the correct order
    for(int i = 0; i < pos / 2; i++) {
        swap(prefix[i], prefix[pos - i - 1]);
    }
    prefix[pos] = '\0'; // Null-terminate the prefix string
}

int main() {
    cout << "Enter the infix expression: ";
    cin >> infix;
    infixtoprefix(infix);
    cout << "Infix expression: " << infix << endl;
    cout << "Prefix expression: " << prefix << endl;
    return 0;
}
