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






//----------------------------------------------------------------------------------------



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




// //----------------------------------------------------------------------------------------

// //sum of array
// int sum(int *arr,int size){
//     //base case
//     if(size==0)return 0;
//     if(size==1)return arr[0];

//     int rem=sum(arr+1,size-1);
//     int sum=arr[0]+rem;
//     return sum;

// }


// int main(){
//     int arr[5]={2,3,4,5,6};
//     int size=5;
//     int n=sum(arr,size);
//     cout<<"sum is: "<<n;
//     }


//----------------------------------------------------------------------------------------

//issorted array
// bool issorted(int *arr,int size){
//     //base case
//     if(size==0||size==1){
//         return true;
//     }

//     if(arr[0]>arr[1]){
//         return false;
//     }
//     else{
//         bool rem=issorted(arr+1,size-1);
//         return rem;
//     }


// }


// int main(){
//     int arr[5]={2,3,4,5,6};
//     int size=5;

//     bool ans=issorted(arr,size);
//     if(ans){
//         cout<<"array is sorted";
//     }
//     else{
//         cout<<"array is not sorted";
//     }
// }





// //----------------------------------------------------------------------------------------

// //linear search 
// bool linearsearch(int *arr,int size,int key){
//     //base case
//     if(size==0)return false;
//     if(size==1)return true;

//     return linearsearch(arr+1,size-1,key);

// }


// int main(){
//     int arr[5]={2,3,4,5,6};
//     int size=5;
//     int key=2;
//     bool ans=linearsearch(arr,size,key);
//     if(ans){
//         cout<<"present"<<endl;
//     }
//     else{
//         cout<<"absent"<<endl;
//     }
//     }





//----------------------------------------------------------------------------------------

// //binary search 
// bool binarysearch(int *arr,int s,int e,int k){
//     //base case
//     if(s>e)return false;
//     int mid=s+(e-s)/2;
//     if(arr[mid]==k)return true;
//     if(arr[mid]<k){
//         return binarysearch(arr,mid+1,e,k);
//     }
//     else{
//         return binarysearch(arr,s,mid-1,k);
//     }
// }


// int main(){
//     int arr[5]={2,3,4,5,6};
//     int size=5;
//     int key=2;
//     cout<<"present or not: "<<binarysearch(arr,0,size-1,key);
    
//     }


//----------------------------------------------------------------------------------------
// int power(int a,int b){
//     //base case
//     if(b==0)return 1;
//     if(b==1)return a;
//     //recursive call
//     int ans=power(a,b/2);
//     //if b is even
//     if(b%2==0)return ans*ans;
//     else return a*ans*ans;
// }

// int main(){
//     int a,b;
//     cin>>a>>b;
//     cout<<endl;
//     int ans=power(a,b);
//     cout<<ans;
// }


//----------------------------------------------------------------------------------------
void sortArray(int *arr, int n) {
    // Base case: If the array has only one element, it's already sorted
    if (n <= 1)
        return;
    // Moving the largest element to the end
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            swap(arr[i], arr[i + 1]);
        }
    }
    // Recursive call for the rest of the array
    sortArray(arr, n - 1);
}
int main() {
    int arr[5] = {5, 2, 8, 1, 3};  // Example input
    sortArray(arr, 5);
    // Printing the sorted array
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
