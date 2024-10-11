//Merge Sort

#include <iostream>
using namespace std;

// int main() {
//     int a[] = {9, 3, 7, 6, 2, 8, 1, 5};
//     int n = sizeof(a) / sizeof(a[0]); 

//     // Temporary array for merging
//     int temp[n];

//     // Iterative Merge Sort using bottom-up approach
//     for (int sz = 1; sz < n; sz *= 2) {  // sz is the size of subarrays
//         for (int l = 0; l < n - sz; l += 2 * sz) {  // l is the starting point of subarray
//             int mid = l + sz - 1;  // Mid point for dividing the array
//             int r = min(l + 2 * sz - 1, n - 1);  // Right boundary of the subarray

//             // Merge two sorted subarrays a[l...mid] and a[mid+1...r]
//             int i = l, j = mid + 1, k = l;  // i for left, j for right, k for temp

//             // Dono subarrays ko merge kar rahe hain
//             while (i <= mid && j <= r) {
//                 if (a[i] <= a[j])
//                     temp[k++] = a[i++];  // Left array se element copy kar rahe hain
//                 else
//                     temp[k++] = a[j++];  // Right array se element copy kar rahe hain
//             }

//             // Agar left side ka kuch bacha hai, usko copy kar rahe hain
//             while (i <= mid)
//                 temp[k++] = a[i++];

//             // Agar right side ka kuch bacha hai, usko copy kar rahe hain
//             while (j <= r)
//                 temp[k++] = a[j++];

//             // Merge hone ke baad temp array se a[] mein copy kar rahe hain
//             for (int i = l; i <= r; i++)
//                 a[i] = temp[i];
//         }
//     }

//     // Sorted array ko print karte hain
//     for (int i = 0; i < n; i++)
//         cout << a[i] << " ";
//     cout << endl;

//     return 0;
// }

//----------------------------------------------------------------------------------------

//Quick Sort

int main() {
    int a[] = {9, 3, 7, 6, 2, 8, 1, 5};
    int n = sizeof(a) / sizeof(a[0]);  // Array ka size nikal rahe hain

    // Stack mein manually sort kar rahe hain partitioning ke saath
    int stack[n];  // Sorting karne ke liye ek stack banate hain
    int top = -1;

    // Shuru mein poora array stack mein daal do
    stack[++top] = 0;
    stack[++top] = n - 1;

    // Jab tak stack empty nahi hota, sort karte jao
    while (top >= 0) {
        int h = stack[top--];  // High (last element)
        int l = stack[top--];  // Low (first element)

        // Pivot element le rahe hain, generally last wala element hota hai
        int pivot = a[h];  
        int i = l - 1;  // i ko -1 pe set kar rahe hain

        // Partition process
        for (int j = l; j < h; j++) {
            if (a[j] <= pivot) {
                i++;
                swap(a[i], a[j]);  // i aur j ke elements ko swap kar rahe hain
            }
        }
        swap(a[i + 1], a[h]);  // Pivot ko correct position pe set kar rahe hain
        int p = i + 1;  // New partition point

        // Agar left side partition bacha hai toh usko stack mein daalo
        if (p - 1 > l) {
            stack[++top] = l;
            stack[++top] = p - 1;
        }

        // Agar right side partition bacha hai toh usko stack mein daalo
        if (p + 1 < h) {
            stack[++top] = p + 1;
            stack[++top] = h;
        }
    }

    // Sorted array ko print karte hain
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;


    return 0;
}


//----------------------------------------------------------------------------------------
