#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;
    
    // Declare vectors to hold names and attendance status
    vector<string> names(n);
    vector<string> attendance(n);
    
    cout << "Enter the names of the students: " << endl;
    for(int i = 0; i < n; i++) {
        cin >> names[i];
    }
    
    cout << "Enter the attendance (1 for present, 0 for absent): " << endl;
    for(int i = 0; i < n; i++) {
        int status;
        cin >> status;
        if(status == 1) {
            attendance[i] = "Present";
        } else {
            attendance[i] = "Absent";
        }
    }
    
    cout << "Attendance Report: \n";
    for(int i = 0; i < n; i++) {
        cout << names[i] << ": " << attendance[i] << endl;
    }
    
    return 0;
}


//method 2

#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    // Create arrays to store names and their attendance status
    string names[n];
    string attendance[n];

    // Read names and their attendance status
    for(int i = 0; i < n; i++) {
        cin >> names[i]; // Read the name
        int status;
        cin >> status; // Read the attendance status
        if(status == 1) {
            attendance[i] = "Present";
        } else {
            attendance[i] = "Absent";
        }
    }

    // Print the attendance report
    cout << "Attendance Report: \n";
    for(int i = 0; i < n; i++) {
        cout << names[i] << ": " << attendance[i] << endl;
    }

    return 0;
}
