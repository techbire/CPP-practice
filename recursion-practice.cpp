// Print an increasing-decreasing sequence using recursion
// Example:
// If n = 5, the output should be:
// 1 2 3 4 5 4 3 2 1


// //normal approach
// #include<bits/stdc++.h>
// using namespace std;
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

//recursion approach
#include <bits/stdc++.h>
using namespace std;

void print(int x, int n){
    if(x>=n){
        cout<<n<<" ";
        return;
    }
    cout<<x<<" ";
    print(x+1,n);
    cout<<x<<" ";
}

int main() {
    int n;
    cin >> n;
    print(1,n);
}

