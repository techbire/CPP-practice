//Merge Sort
//tc: nlogn

#include <bits/stdc++.h>
using namespace std;



// void merge(vector<int>&a,vector<int>&b,vector<int>&res){
//     int i=0,j=0,k=0;
//     while(i<a.size()&&j<b.size()){
//         if(a[i]<b[j]){
//             res[k++]=a[i++];
//         }
//         else{
//             res[k++]=b[j++];
//         }
//     }
//     if(i==a.size()){
//         while(j<b.size()){
//             res[k++]=b[j++];
//         }
//     }
//     if(j==b.size()){
//         while(i<a.size()){
//             res[k++]=a[i++];
//         }
//     }
// }

// void mergeSort(vector<int>&v){
//     int n=v.size();
//     if(n==1)return;
//     int n1=n/2,n2=n-n/2;
//     vector<int>a(n1),b(n2);
//     //copy pasting
//     for(int i=0;i<n1;i++){
//         a[i]=v[i];
//     }
//     for(int i=0;i<n2;i++){
//         b[i]=v[i+n1];
//     }
//     //recursion
//     mergeSort(a);
//     mergeSort(b);
//     //merge
//     merge(a,b,v);
//     }




 
// int main(){
//     int arr[]={4,5,2,3,9,0};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     vector<int>v(arr,arr+n);
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
//     mergeSort(v);
// }




//----------------------------------------------------------------------------------------

//different roop   :
//class Solution {
// private:
// // Merge function
// void merge(vector<int>& nums, int s, int m, int e) {
//     int n1 = m - s + 1;
//     int n2 = e - m;

//     vector<int> arr1(n1), arr2(n2);

//     // Copy elements into temp arrays
//     for (int i = 0; i < n1; i++) arr1[i] = nums[s + i];
//     for (int i = 0; i < n2; i++) arr2[i] = nums[m + 1 + i];

//     // Merge the two arrays
//     int i = 0, j = 0, k = s;
//     while (i < n1 && j < n2) {
//         if (arr1[i] <= arr2[j]) {
//             nums[k] = arr1[i];
//             i++;
//         } else {
//             nums[k] = arr2[j];
//             j++;
//         }
//         k++;
//     }

//     // Copy remaining elements
//     while (i < n1) {
//         nums[k] = arr1[i];
//         i++;
//         k++;
//     }
//     while (j < n2) {
//         nums[k] = arr2[j];
//         j++;
//         k++;
//     }
// }

// // Merge Sort Function
// void mergesort(vector<int>& nums, int s, int e) {
//     if (s < e) {
//         int m = s + (e - s) / 2;
//         mergesort(nums, s, m);
//         mergesort(nums, m + 1, e);
//         merge(nums, s, m, e);
//     }
// }

// public:
// vector<int> sortArray(vector<int>& nums) {
//     mergesort(nums, 0, nums.size() - 1);
//     return nums;
// }
// };

//----------------------------------------------------------------------------------------

//Quick Sort
//tc: nlogn

// int partition(vector<int>&arr,int st,int end){
//     int index=st-1,pivt=arr[end];
//     for(int j=st;j<end;j++){
//         if(arr[j]<=pivt){
//             index++;
//             swap(arr[j],arr[index]);

//         }
//     }
//     index++;
//     swap(arr[end],arr[index]);
//     return index;
// }
// void quicksort(vector<int>&arr,int st,int end){
//     if(st<end){
//         int pivtindex=partition(arr,st,end);
//         quicksort(arr,st,pivtindex-1); //left half
//         quicksort(arr,pivtindex+1,end); //right half
//     }
// }

// int main(){
//     vector<int> arr={23,43,24,53,26,38};
//     quicksort(arr,0,arr.size()-1);
//     for(int val:arr){
//         cout<<val<<" ";
//     }
//     cout<<endl;
// }




//----------------------------------------------------------------------------------------
int main(){
    int arr[]={3,5,6,7,8,9,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //cyclic sort
    int i=0;
    while(i<n){
        int correctindex=arr[i]-1;
        if (correctindex >= 0 && correctindex < n && arr[i] != arr[correctindex])  
        swap(arr[i], arr[correctindex]);  
    else  
        i++;  
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

