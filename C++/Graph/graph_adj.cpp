// #include<iostream>
// #include<bits/stdc++.h>
// #include<vector>
// #include<list>
// using namespace std;
// int main()
// {
//     int n,e;
//     list<int>adj_list[n];
     
//     cin>>n>>e;
//     for(int i=0;i<n;i++)
//     {    
//         cout<<" enter the number of both edges "<<endl;
//         int u,v;
//         cin>>u>>v;
//         adj_list[u].push_back(v);
//         adj_list[v].push_back(u);
//     }
//       for(int i=0;i<n;i++)
//       {  cout << i << "--->";
//         list<int>::iterator it;
//           for(it = adj_list[i].begin(); it != adj_list[i].end(); ++it) {
//          cout << *it << " ";
//       }
//       cout << endl;
//       }

//     return 0;
// }
// Adjascency List representation in C++

#include <bits/stdc++.h>
using namespace std;

// Add edge
void addEdge(vector<int> adj[], int s, int d) {
  adj[s].push_back(d);
  adj[d].push_back(s);
}

// Print the graph
void printGraph(vector<int> adj[], int V) {
  for (int d = 0; d < V; ++d) {
    cout << "\n Vertex "
       << d << ":";
    for (auto x : adj[d])
      cout << "-> " << x;
    printf("\n");
  }
}

int main() {
  int V = 5;

  // Create a graph
  vector<int> adj[V];

  // Add edges
  addEdge(adj, 0, 1);
  addEdge(adj, 0, 2);
  addEdge(adj, 0, 3);
  addEdge(adj, 1, 2);
  printGraph(adj, V);
}