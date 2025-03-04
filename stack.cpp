#include <iostream>
#include <cstring>
#include <stack>

using namespace std;


// int main(){
//     stack<int> st;
//     cout<<st.size()<<endl;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     cout<<st.size()<<endl;
//     st.pop();
//     cout<<st.size()<<endl;
//     cout<<st.top()<<endl;
//     //printing all element but delete ho rha hai element

//     while(st.size()>0){
//         cout<<st.top()<<" ";
//         st.pop();
//     }

//     //for preventing the deletion, we have to create temp stack but reverse order aayega;

//     stack<int> temp;
//     while(st.size()>0){
//         cout<<st.top()<<" ";
//         int x=st.top();
//         st.pop();
//         temp.push(x); //element supply ho gya, temp me 
//     }

//     //putting elements back from temp to st

//     while(temp.size()>0){
//         int x=temp.top();
//         temp.pop();
//         st.push(x);
//     }
// cout<<endl<<st.top();
// }

//-----------------------------------------------------------------------------------------------------------------------


//push element at bottom / any bottom



// void print(stack<int>& st) {
//     stack<int> temp;
//     // Transfer elements to temp stack and print them
//     while (st.size() > 0) {
//         temp.push(st.top());
//         st.pop();
//     }

//     // Putting elements back from temp to st
//     while (temp.size() > 0) {
//         cout << temp.top() << " ";
//         st.push(temp.top());
//         temp.pop();
//     }

//     cout << endl;
// }

// void pushAtBottom(stack<int>& st, int val) {
//     stack<int> temp;

//     // Move elements from st to temp
//     while (st.size() > 0) {
//         temp.push(st.top());
//         st.pop();
//     }

//     // Push the value at the bottom of the stack
//     st.push(val);

//     // Move elements back from temp to st
//     while (temp.size() > 0) {
//         st.push(temp.top());
//         temp.pop();
//     }
// }

// void pushAtIdx(stack<int>& st, int idx, int val) {
//     stack<int> temp;

//     // Move elements until idx position is reached
//     while (st.size() > idx) {
//         temp.push(st.top());
//         st.pop();
//     }

//     // Push the value at the specific index
//     st.push(val);

//     // Move remaining elements back to st
//     while (temp.size() > 0) {
//         st.push(temp.top());
//         temp.pop();
//     }
// }

// int main() {
//     stack<int> st;

//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     st.push(50);

//     print(st);

//     pushAtBottom(st, 0);
//     print(st);

//     pushAtIdx(st, 2, 99); // Push 99 at index 2
//     print(st);

//     return 0;
// }



//-----------------------------------------------------------------------------------------------------------------------

// //reverse a linkedlist using recurssion
// void displayrev(stack<int>&st){
//     if(st.size()==0)return;
//     int x=st.top();
//     cout<<x<<" ";   //is line ko agar ham displayrev(st) ke niche rakhte hai toh display kabel hoga bina recurssion ke!!
//     st.pop();
//     displayrev(st);
//     st.push(x);   // phir se dalna chalu hoga
// }


//------------------------------------------------------------------------------------------------------------------------
// //Linkedlist implementation on stack

// class node {
// public:
//     int val;
//     node* next;
//     node(int val) {
//         this->val = val;
//         this->next = nullptr;
//     }
// };

// class Stack {
// public:
//     node* head;
//     int size;

//     Stack() { // Constructor name fixed
//         head = nullptr;
//         size = 0;
//     }

//     void push(int val) {
//         node* temp = new node(val);
//         temp->next = head;
//         head = temp;
//         size++;
//     }

//     void pop() {
//         if (head == nullptr) {
//             cout << "Stack is empty." << endl;
//             return;
//         }
//         node* toDelete = head;
//         head = head->next;
//         delete toDelete; // Free memory
//         size--;
//     }

//     int top() {
//         if (head == nullptr) {
//             cout << "Stack is empty." << endl;
//             return -1;
//         }
//         return head->val;
//     }

//     void print(node* temp) {
//         if (temp == nullptr) return;
//         print(temp->next);
//         cout << temp->val << " ";
//     }

//     void display() {
//         node* temp = head;
//         print(temp);
//         cout << endl;
//     }
// };

// int main() {
//     Stack st;
//     cout << st.top() << endl; // Output should indicate stack is empty
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     cout << "Size: " << st.size << endl; // Display size
//     st.pop();
//     cout << "Size after pop: " << st.size << endl; // Display size after pop
//     cout << "Top element: " << st.top() << endl; // Display top element
//     st.display(); // Display stack contents
// }



//------------------------------------------------------------------------------------------------------------------------
//finding next greater element

// int main(){
 
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// cout<<endl;

// int nge[n];

// // //brute force approach tc=0(n^2),sc=0(1)
// // for(int i=0;i<n;i++){
// //     nge[i]=-1;
// //     for(int j=i+1;j<n;j++){
// //         if(arr[j]<arr[i]){
// //             nge[i]=arr[j];
// //             break;
// //         }
// //     }
// // }


// //optional approach, tc:0(n)   sc:0(n)
// //using stack: pop,ans,push and reverse traverse 
// stack<int>st;
// nge[n-1]=-1;
// st.push(arr[n-1]);
// for(int i=n-2;i>=0;i--){
// //pop all the elements smaller than arr[i]
// while(st.size()>0&&st.top()<=arr[i]){
//     st.pop();
// }
// if(st.size()==0) nge[i]=-1;
// else nge[i]=st.top();
// //push the arr[i];
// st.push(arr[i]);
// }


// for(int i=0;i<n;i++){
//     cout<<nge[i]<<" ";
// }
// cout<<endl;
// }



//------------------------------------------------------------------------------------------------------------------------


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
//     int val;
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
//         newNode->val = val;
//         newNode->next = top;
//         top = newNode;
//     }

//     int pop() {
//         if (top == NULL) {
//             cout << "Stack underflow" << endl;
//             return -1;  // Return a special value to indicate underflow
//         } else {
//             int poppedValue = top->val;
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
//                 cout << ptr->val << " ";
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
  


//------------------------------------------------------------------------------------------------------------------------
//Infix evaluation
// int priority(char ch){
//     if(ch=='+'||ch=='-')return 1;
//     else return 2;
// }

// int solve(int val1,int val2, int ch){
//     if(ch=='+')return val1+val2;
//     if(ch=='-')return val1-val2;
//     if(ch=='*')return val1*val2;
//     else return val1/val2;
// }

// int main(){
//     string s="2+6*4/8-3";
//     stack<int>val;
//     stack<int>op;
//     for(int i=0;i<s.length();i++){
//         if(s[i]>='0'&&s[i]<='9'){
//             val.push(s[i]-'0');
//     }
//     else{ //s[i]--*,/,+,-
//         if(op.size()==0 || priority(s[i])>priority(op.top()))
//         op.push(s[i]);
//         else{ //kaam {v1 op v2 from prev. in last till happen then if condition fullfill}
//             while(op.size()>0&&priority(s[i])<=priority(op.top())){
//                 //kaam happen
//                 char ch=op.top();
//                 op.pop();
//                 int val2=val.top();
//                 val.pop();
//                 int val1=val.top();
//                 val.pop();
//                 int ans=solve(val1,val2,ch);
//                 val.push(ans);
//             }
//             op.push(s[i]);
//         }
//     }
// }
// //the operartor stack can have values..so make them empty
// while(op.size()>0){
//         char ch=op.top();
//         op.pop();
//         int val2=val.top();
//         val.pop();
//         int val1=val.top();
//         val.pop();
//         int ans=solve(val1,val2,ch);
//         val.push(ans);
// }
// cout<<val.top();
// }


//------------------------------------------------------------------------------------------------------------------------
//Infix evaluation with braket
int priority(char ch){
    if(ch=='+'||ch=='-')return 1;
    else return 2;
}

int solve(int val1,int val2, int ch){
    if(ch=='+')return val1+val2;
    if(ch=='-')return val1-val2;
    if(ch=='*')return val1*val2;
    else return val1/val2;
}

int main(){
    string s="(7+9)*4/8-3";
    stack<int>val;
    stack<int>op;
    for(int i=0;i<s.length();i++){
        if(s[i]>='0'&&s[i]<='9'){
            val.push(s[i]-'0');
    }
    else{ //s[i]--*,/,+,-,(,)
        if(op.size()==0)op.push(s[i]);
        else if(s[i]=='(')op.push(s[i]);
        else if(op.top()=='(')op.push(s[i]);
       
        else if(s[i]==')'){
            while(op.top()!='('){
                char ch=op.top();
                op.pop();
                int val2=val.top();
                val.pop();
                int val1=val.top();
                val.pop();
                int ans=solve(val1,val2,ch);
                val.push(ans); 
            }
            op.pop(); //open bkt removed
        }
         else if(priority(s[i])>priority(op.top()))op.push(s[i]);
        else{ //kaam {v1 op v2 from prev. in last till happen then if condition fullfill}
            while(op.size()>0&&priority(s[i])<=priority(op.top())){
                //kaam happen
                char ch=op.top();
                op.pop();
                int val2=val.top();
                val.pop();
                int val1=val.top();
                val.pop();
                int ans=solve(val1,val2,ch);
                val.push(ans);
            }
            op.push(s[i]);
        }
    }
}
//the operartor stack can have values..so make them empty
while(op.size()>0){
        char ch=op.top();
        op.pop();
        int val2=val.top();
        val.pop();
        int val1=val.top();
        val.pop();
        int ans=solve(val1,val2,ch);
        val.push(ans);
}
cout<<val.top();
}


















//------------------------------------------------------------------------------------------------------------------------
//to convert an infix expression to a prefix expression using a stack

// char infix[10], prefix[10], stack[10];
// int length, pos = 0, top = -1;
// char symbol, temp;

// void push(char symbol) {
//     top = top + 1;
//     stack[top] = symbol;
// }

// char pop() {
//     char sym = stack[top];
//     top = top - 1;
//     return sym;
// }

// int precedence(char symb) {
//     switch(symb) {
//         case '^': return 3;
//         case '*':
//         case '/': return 2;
//         case '+':
//         case '-': return 1;
//         case '(': 
//         case ')': return 0;
//         case '#': return -1;
//         default: return -1; // Handle unexpected cases
//     }
// }

// void infixtoprefix(char infix[]) {
//     length = strlen(infix);
//     push('#');
//     for(int i = length - 1; i >= 0; i--) {
//         symbol = infix[i];
//         switch(symbol) {
//             case ')': 
//                 push(symbol);
//                 break;
//             case '(':
//                 while((temp = pop()) != ')') {
//                     prefix[pos++] = temp;
//                 }
//                 break;
//             case '+':
//             case '-':
//             case '*':
//             case '/':
//             case '^':
//                 while(precedence(stack[top]) > precedence(symbol)) {
//                     temp = pop();
//                     prefix[pos++] = temp;
//                 }
//                 push(symbol);
//                 break;
//             default:
//                 prefix[pos++] = symbol;
//                 break;
//         }
//     }
    
//     while(top > -1) {
//         temp = pop();
//         prefix[pos++] = temp;
//     }
    
//     // Reverse the prefix array to get the correct order
//     for(int i = 0; i < pos / 2; i++) {
//         swap(prefix[i], prefix[pos - i - 1]);
//     }
//     prefix[pos] = '\0'; // Null-terminate the prefix string
// }

// int main() {
//     cout << "Enter the infix expression: ";
//     cin >> infix;
//     infixtoprefix(infix);
//     cout << "Infix expression: " << infix << endl;
//     cout << "Prefix expression: " << prefix << endl;
//     return 0;
// }
