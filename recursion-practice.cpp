#include <bits/stdc++.h>
using namespace std;

// Print an increasing-decreasing sequence using recursion
// Example:
// If n = 5, the output should be:
// 1 2 3 4 5 4 3 2 1


// //normal approach

// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         cout<<i<<" ";
//     }
//     for(int i=n-1;i>=1;i--){
//         cout<<i<<" ";
//     }
// }

// //recursion approach


// void print(int x, int n){
//     if(x>=n){
//         cout<<n<<" "; //4                                step2
//         return;
//     }
//     cout<<x<<" ";  // eg.4 output from this line- 123    step1
//     print(x+1,n);
//     cout<<x<<" ";  //and from here 321                   step 3
// }

// int main() {
//     int n;
//     cin >> n;
//     print(1,n);
// }

// //Write a program to print the sum of all odd numbers from a to b (inclusive) using recursion

// void print(int x,int n){
//     if(x>n)return;
//     if(x%2!=0)cout<<x<<" ";
//     print(x+1,n);
// }


// int main(){
//     int a;
//     cout<<"enter the first number: ";
//     cin>>a;
//     int b;
//     cout<<"enter the second number: ";
//     cin>>b;
//     print(a,b);
// }