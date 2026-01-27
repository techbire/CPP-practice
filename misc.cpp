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

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;   
deque<int> dq;

for(int i = 0; i < n; i++) {

    // out of window remove
    if(!dq.empty() && dq.front() <= i - k)
        dq.pop_front();

    // remove bigger elements
    while(!dq.empty() && arr[dq.back()] >= arr[i])
        dq.pop_back();

    dq.push_back(i);

    // window ready
    if(i >= k - 1)
        cout << arr[dq.front()] << " ";
}


}