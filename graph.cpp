// //bfs ka code hai
// #include <bits/stdc++.h>
// using namespace std;

// class Solution {
// public:
//     vector<int> bfsOfGraph(vector<vector<int>> &adj) {
//         int v = adj.size(); 
//         queue<int> q; 
//         q.push(0); // Start BFS from node 0
//         vector<bool> visited(v, false);
//         visited[0] = true; 
//         vector<int> ans; 
        
//         while (!q.empty()) {
//             int node = q.front();
//             q.pop();
//             ans.push_back(node);
            
//             for (int neighbor : adj[node]) {
//                 if (!visited[neighbor]) {
//                     visited[neighbor] = true;        // Mark as visited
//                     q.push(neighbor);               // Push neighbor into the queue
//                 }
//             }
//         }    
//         return ans;
//     }
// };

// int main() {
//     // Example graph represented as an adjacency list
//     vector<vector<int>> adj = {
//         {1, 2},       // Neighbors of node 0
//         {0, 3, 4},    // Neighbors of node 1
//         {0, 4},       // Neighbors of node 2
//         {1, 5},       // Neighbors of node 3
//         {1, 2},       // Neighbors of node 4
//         {3}           // Neighbors of node 5
//     };

// // Graph Representation:
// // 0 -> 1, 2
// // 1 -> 0, 3, 4
// // 2 -> 0, 4
// // 3 -> 1, 5
// // 4 -> 1, 2
// // 5 -> 3

// // Visual Representation:
// //    0
// //   / \
// //  1---2
// //  |\  |
// //  | \ |
// //  |  \|
// //  3---4
// //   \
// //    5

//     Solution obj;
//     vector<int> ans = obj.bfsOfGraph(adj);

//     // Printing the BFS traversal
//     for (int node : ans) {
//         cout << node << " ";
//     }
//     cout << endl;

//     return 0;
// }


//----------------------------------------------------------------------------------------------------------------------
//dfs ka code hai

// #include <iostream>
// using namespace std;

// #define MAX 6 // Number of nodes in the graph

// int adj[MAX][MAX] = {
//     // Adjacency matrix for the graph
//     // 0  1  2  3  4  5
//     {0, 1, 1, 0, 0, 0}, // Node 0
//     {1, 0, 0, 1, 1, 0}, // Node 1
//     {1, 0, 0, 0, 1, 0}, // Node 2
//     {0, 1, 0, 0, 0, 1}, // Node 3
//     {0, 1, 1, 0, 0, 0}, // Node 4
//     {0, 0, 0, 1, 0, 0}  // Node 5
// };


// // Graph Representation:
// // 0 -> 1, 2
// // 1 -> 0, 3, 4
// // 2 -> 0, 4
// // 3 -> 1, 5
// // 4 -> 1, 2
// // 5 -> 3

// // Visual Representation:
// //    0
// //   / \
// //  1---2
// //  |\  |
// //  | \ |
// //  |  \|
// //  3---4
// //   \
// //    5

// int visited[MAX] = {0}; // Array to track visited nodes

// void DFS(int node) {
//     cout<<node; // Print the current node
//     visited[node] = 1;   // Mark the current node as visited

//     for (int j = 0; j < MAX; j++) {
//         if (adj[node][j] == 1 && !visited[j]) { // If there's an edge and the neighbor is unvisited
//             DFS(j); // Recursively visit the neighbor
//         }
//     }
// }

// int main() {
//     cout<<"DFS Traversal starting from node 0:\n";
//     DFS(0); // Start DFS from node 0

//     return 0;
// }


// //----------------------------------------------------------------------------------------------------------------------
// // Warshall's Algorithm (Graph Closure)
// #include <bits/stdc++.h>
// using namespace std;
// void warshall(vector<vector<int>>& g) {
//     int n = g.size();
//     for (int k = 0; k < n; k++)
//         for (int i = 0; i < n; i++)
//             for (int j = 0; j < n; j++)
//                 g[i][j] |= (g[i][k] && g[k][j]);
// }
// //----------------------------------------------------------------------------------------------------------------------
// // Floyd-Warshall (Shortest Path)
// #include <bits/stdc++.h>
// using namespace std;
// void floydWarshall(vector<vector<int>>& dist) {
//     int n = dist.size();
//     for (int k = 0; k < n; k++)
//         for (int i = 0; i < n; i++)
//             for (int j = 0; j < n; j++)
//                 if (dist[i][k] != INT_MAX && dist[k][j] != INT_MAX)
//                     dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
// }
// //----------------------------------------------------------------------------------------------------------------------
// // Modified Warshall Algorithm
// #include <bits/stdc++.h>
// using namespace std;
// void modifiedWarshall(vector<vector<int>>& g) {
//     int n = g.size();
//     for (int k = 0; k < n; k++)
//         for (int i = 0; i < n; i++)
//             for (int j = 0; j < n; j++)
//                 g[i][j] = g[i][j] || (g[i][k] && g[k][j]);
// }


