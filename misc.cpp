#include <bits/stdc++.h>
using namespace std;

// // Sample test cases :

// // Input 1 :
// // 3
// // John 1
// // Alice 0
// // Bob 1

// // Output 1 :
// // Attendance Report:
// // John: Present
// // Alice: Absent
// // Bob: Present


//method - vector

// int main() {
//     int n;
//     cout << "Enter the number of students: ";
//     cin >> n;
    
//     // Declare vectors to hold names and attendance status
//     vector<string> names(n);
//     vector<string> attendance(n);
    
//     cout << "Enter the names of the students: " << endl;
//     for(int i = 0; i < n; i++) {
//         cin >> names[i];
//     }
    
//     cout << "Enter the attendance (1 for present, 0 for absent): " << endl;
//     for(int i = 0; i < n; i++) {
//         int status;
//         cin >> status;
//         if(status == 1) {
//             attendance[i] = "Present";
//         } else {
//             attendance[i] = "Absent";
//         }
//     }
    
//     cout << "Attendance Report: \n";
//     for(int i = 0; i < n; i++) {
//         cout << names[i] << ": " << attendance[i] << endl;
//     }
    
//     return 0;
// }


// //method - array

// int main() {
//     int n;
//     cin >> n;
    
//     // Create arrays to store names and their attendance status
//     string names[n];
//     string attendance[n];

//     // Read names and their attendance status
//     for(int i = 0; i < n; i++) {
//         cin >> names[i]; // Read the name
//         int status;
//         cin >> status; // Read the attendance status
//         if(status == 1) {
//             attendance[i] = "Present";
//         } else {
//             attendance[i] = "Absent";
//         }
//     }

//     // Print the attendance report
//     cout << "Attendance Report: \n";
//     for(int i = 0; i < n; i++) {
//         cout << names[i] << ": " << attendance[i] << endl;
//     }

//     return 0;
// }


//-----------------------------------------------------------------------------------------------------------------

// Sample test cases :
// Input 1 :
// 10 12 13 234 45 34 67 78 76 12
// Output 1 :
// Arranged elements are: 10 12 12 13 34 45 67 76 78 234 
// Input 2 :
// 12 12 12 12 12 12 12 12 12 12
// Output 2 :
// All numbers are the same
// Input 3 :
// 1 2 -3 -4 5 -6 7 -8 9 10
// Output 3 :
// Arranged elements are: -8 -6 -4 -3 1 2 5 7 9 10

//method - vector

// int main() {
//     string input;
//     vector<int> nums;

//     // Get the input in one line
//     cout << "Enter the elements: ";
//     getline(cin, input); // Reading the entire line

//     // Use a stringstream to parse the input and convert to integers
//     stringstream ss(input);
//     int num;
//     while (ss >> num) {
//         nums.push_back(num);
//     }

//     // If no elements were entered
//     if (nums.empty()) {
//         cout << "No elements entered!" << endl;
//         return 0;
//     }

//     // Check if all elements are the same
//     bool allSame = true;
//     for (int i = 1; i < nums.size(); i++) {
//         if (nums[i] != nums[0]) {
//             allSame = false;
//             break;
//         }
//     }

//     if (allSame) {
//         cout << "All numbers are the same" << endl;
//     } else {
//         // Sort the array
//         sort(nums.begin(), nums.end());
//         cout << "Arranged elements are: ";
//         for (int num : nums) {
//             cout << num << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }


//-----------------------------------------------------------------------------------------------------------------
//you are given an array of length n, you have to find the minimum in every k-size window

//bruteforce

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int k;
//     cin>>k;

// for(int i = 0; i + k <= n; i++) {
//     int mn = INT_MAX;
//     for(int j = i; j < i + k; j++) {
//         mn = min(mn, arr[j]);
//     }
//     cout << mn << " ";
// }
// }

//Optimal Idea (Sliding Window + Deque)

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int k;
//     cin>>k;   
// deque<int> dq;

// for(int i = 0; i < n; i++) {

//     // out of window remove
//     if(!dq.empty() && dq.front() <= i - k)
//         dq.pop_front();

//     // remove bigger elements
//     while(!dq.empty() && arr[dq.back()] >= arr[i])
//         dq.pop_back();

//     dq.push_back(i);

//     // window ready
//     if(i >= k - 1)
//         cout << arr[dq.front()] << " ";
// }
// }

//-----------------------------------------------------------------------------------------------------------------
//you are given an array of size n you have to find that immediate next greater of every element of array

// int main() {
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }

//     vector<int> next_greater(n, -1); // Initialize result with -1
//     stack<int> st;

//     for(int i = 0; i < n; ++i) {
//         while(!st.empty() && arr[i] > arr[st.top()]) {
//             next_greater[st.top()] = arr[i];
//             st.pop();
//         }
//         st.push(i);
//     }

//     // Output for every element
//     for(int i = 0; i < n; i++) {
//         cout << "Next greater for " << arr[i] << " is " << next_greater[i] << endl;
//     }

//     return 0;
// }

//-----------------------------------------------------------------------------------------------------------------
//prefix sum

// int main(){
//     int n;
//     cin >> n;
//     int arr[n], ps[n];

//     cin >> arr[0];
//     ps[0] = arr[0];

//     for(int i = 1; i < n; i++){
//         cin >> arr[i];
//         ps[i] = ps[i-1] + arr[i];
//     }

//     for(int i = 0; i < n; i++)
//         cout << ps[i] << " ";
// }



//-----------------------------------------------------------------------------------------------------------------
//find the first index of first one using binary serach algo
//input = 0 0 0 0 0 1 1 1 1 1 1 1
//ouput = 6

// int main() {
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int low = 0, high = n - 1;
//     int result = -1; // if no 1 is found

//     while (low <= high) {
//         int mid = (low + high) / 2;

//         if(arr[mid] == 1) {
//             result = mid;      // Update result: found a 1, but let's look for left half
//             high = mid - 1;
//         } else {
//             low = mid + 1;     // Continue to right half
//         }
//     }

//     if(result != -1)
//         cout << result + 1 << endl;   // 1-based index (as your sample output says "6" for 6th element)
//     else
//         cout << "-1" << endl;         // No 1 found

//     return 0;
// }



//-----------------------------------------------------------------------------------------------------------------

// A factory has n machines which can be used to make products. Your goal is to make a total of t products.
// For each machine, you know the number of seconds it needs to make a single product. The machines can work simultaneously, and you can freely decide their schedule.
// What is the shortest time needed to make t products?
// Input
// The first input line has two integers n and t: the number of machines and products.
// The next line has n integers k_1,k_2,\dots,k_n: the time needed to make a product using each machine.
// Output
// Print one integer: the minimum time needed to make t products.

// Example
// Input:
// 3 7
// 3 2 5

// Output:
// 8

// Explanation: Machine 1 makes two products, machine 2 makes four products and machine 3 makes one product.

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     long long t;
//     cin >> n >> t;

//     vector<long long> k(n);
//     for(int i = 0; i < n; i++) cin >> k[i];

//     long long low = 0, high = 1e18;
//     long long ans = high;

//     while(low <= high) {
//         long long mid = (low + high) / 2;

//         long long products = 0;
//         for(int i = 0; i < n; i++) {
//             products += mid / k[i];
//             if(products >= t) break;
//         }

//         if(products >= t) {
//             ans = mid;
//             high = mid - 1;
//         } else {
//             low = mid + 1;
//         }
//     }

//     cout << ans;
//     return 0;
// }



//-----------------------------------------------------------------------------------------------------------------

// You are given n walls arranged in a straight line.
// The time required to paint the i-th wall is x[i] seconds.
// You want all the walls to be painted within T seconds.

// Rules:
// Each painter can paint only contiguous walls.
// A wall cannot be painted partially by multiple painters.
// A painter paints walls one after another (no parallel work for a single painter).
// Your task is to determine the minimum number of painters required so that all walls are painted within T seconds.

// Input Format

// The first line contains an integer n — number of walls
// The second line contains n integers x[ ] — time required to paint each wall
// The third line contains an integer T — maximum allowed time

// Output Format

// Print a single integer — the minimum number of painters required
// If it is not possible to paint all walls within T seconds, print -1

// Example 1
// Input
// n = 5
// x = [3, 5, 3, 2, 6]
// T = 8

// Output
// 3

// Explanation

// One optimal way:

// Painter 1 paints walls: [3, 5] → time = 8

// Painter 2 paints walls: [3, 2] → time = 5

// Painter 3 paints walls: [6] → time = 6

// All painters finish within T = 8 seconds.
// Minimum painters needed = 3



// int main() {
//     int nw;
//     cin >> nw;

//     vector<long long> x(nw);
//     for(int i = 0; i < nw; i++) cin >> x[i];

//     long long T;
//     cin >> T;

//     long long painters = 1;
//     long long currTime = 0;

//     for(int i = 0; i < nw; i++) {
//         if(x[i] > T) {
//             cout << -1;
//             return 0;
//         }

//         if(currTime + x[i] <= T) {
//             currTime += x[i];
//         } else {
//             painters++;
//             currTime = x[i];
//         }
//     }

//     cout << painters;
//     return 0;
// }

//-----------------------------------------------------------------------------------------------------------------
//Problem: Maximum Consecutive Ones After K Flips (Two Pointer)

//You are given an array arr consisting of only 0s and 1s and an integer k.
// You are allowed to flip at most k zeros into ones.
// Your task is to find the maximum length of a contiguous subarray that contains only 1s after performing at most k flip operations.

//  Input Format
// First line contains an integer n — size of the array
// Second line contains n integers (0 or 1)
// Third line contains an integer k

//  Output Format
// Print a single integer — the maximum length of the subarray containing only 1s after at most k flips

//  Constraints
// 1 ≤ n ≤ 10^5
// 0 ≤ k ≤ n
// arr[i] is either 0 or 1

//  Explanation (Two Pointer Idea)
// Use a sliding window
// Expand right pointer
// Count zeros in the window
// If zeros exceed k, shrink from left
// Track maximum window size

//  Sample Test Case 1
// Input
// 7
// 1 1 0 0 1 1 1
// 1

// Output
// 4


// Explanation
// Flip one 0 → longest subarray becomes [1 1 0 1 1 1] → length = 4

//  Sample Test Case 2
// Input
// 8
// 1 0 0 1 1 0 1 1
// 2


// Output
// 6


// Explanation
// Flip two zeros → [1 0 0 1 1 0 1 1] → longest valid subarray length = 6

//-----------------------------------------------------------------------------------------------------------------
//upper bound and lower bound 
//inbuild function
// int main(){
//     int n;
//     cin>>n;
//     vector<int>arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     sort(arr.begin(),arr.end());
//     int low, up;
//     cin>>low>>up;
//     cout<<lower_bound(arr.begin(), arr.end(), low) - arr.begin()<<endl;
//     cout<<upper_bound(arr.begin(), arr.end(), up) - arr.begin()<<endl;
// }


//logic based


// int main() {
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     sort(arr.begin(), arr.end());

//     int low, up;
//     cin >> low >> up;

//     // -------- lower bound --------
//     int l = 0, r = n - 1;
//     int lb = n;   // default n (not found case)

//     while(l <= r) {
//         int mid = l + (r - l) / 2;
//         if(arr[mid] >= low) {
//             lb = mid;
//             r = mid - 1;
//         } else {
//             l = mid + 1;
//         }
//     }

//     // -------- upper bound --------
//     l = 0;
//     r = n - 1;
//     int ub = n;

//     while(l <= r) {
//         int mid = l + (r - l) / 2;
//         if(arr[mid] > up) { //key difference in upper bound
//             ub = mid;
//             r = mid - 1;
//         } else {
//             l = mid + 1;
//         }
//     }

//     cout << lb << endl;
//     cout << ub << endl;
// }




//-----------------------------------------------------------------------------------------------------------------

