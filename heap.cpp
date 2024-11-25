#include<iostream>
using namespace std;
// class maxheap{
//     int *arr;
//     int size;  //total elements in heap
//     int total_size;  //total size of array

//     public:
//     maxheap(int n){
//         arr=new int[n];
//         size=0;
//         total_size=n;
//     }
    
//     //insert into the heap
//     void insert(int value){
//         //if heap size is available or not
//         if(size==total_size){
//             cout<<"heap overflow\n";
//             return;
//         }

//         arr[size]=value;
//         int index=  size;
//         size++;

//         //compare it with its parent

//         while(index>0&&arr[(index-1)/2]<arr[index]){
//             swap(arr[index],arr[(index-1)/2]);
//             index=(index-1)/2;
//         }      
    
//     cout<<arr[index]<<" is inserted into heap\n";
//     }

//     void print(){
//         for(int i=0;i<size;i++){
//             cout<<arr[i]<<" ";
//         }
//         cout<<endl;
//     }

//     void heapify(int index){
//         int largest=index;
//         int left=2*index+1;
//         int right=2*index+2;

//         //largest will store the index of the element which is greater btwn parent, left child and right child

//         if(left<size&&arr[left]>arr[largest]){
//             largest=left;
//         }
//         if(right<size&&arr[right]>arr[largest]){
//             largest=right;
//         }

//         if(largest!=index){
//             swap(arr[index],arr[largest]);
//             heapify(largest);
//         }
//     }

//     void Delete(){
//         if(size==0){
//             cout<<"heap underflow\n";
//             return;
//         }
//         cout<<arr[0]<<" is deleted from the heap";
//         arr[0]=arr[size-1];
//         size--;
//         if(size==0){
//             return;
//         }
//         heapify(0);
//         cout<<endl;
//     }
// };

// int main(){
//     maxheap h1(6);
//     h1.insert(4);
//     h1.insert(14);
//     h1.insert(11);
//     h1.print();
//     h1.Delete();
//     h1.print();
// }

//---------------------------------------------------------------------------------
#include<iostream>
using namespace std;

void heapify(int arr[],int index,int n){
    int largest=index;
    int left=2*index+1;
    int right=2*index+2;
    if(left<n&&arr[left]>arr[largest]){   // < ye lagana buildminheap
        largest=left;
    }
    if(right<n&&arr[right]>arr[largest]){  // < ye lagana buildminheap
        largest=right;
    }
    if(largest!=index){
        swap(arr[largest],arr[index]);
        heapify(arr,largest,n);
    }
}

void printheap(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void buildmaxheap(int arr[],int n){
    //step down
    for(int i=n/2-i;i>=0;i--){
        heapify(arr,i,n);
    }
}

int main(){
    int arr[]={10,3,8,9,5,13,18,14,11,70};
    buildmaxheap(arr,10);
    printheap(arr,10);
}