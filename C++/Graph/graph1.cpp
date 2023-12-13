#include<iostream>
using namespace std;
int adj[20][20];
int main()
{
    int n,e;//n ->nodes, e->edges 
    cin>>n>>e;
    // int adj[n+1][n+1]={0};
    for(int i=0;i<e;i++)
    {
        cout<<"enter the no of vertices and edges"<<endl;
        int u,v;
        cin>>u>>v;
        adj[u][v]=1;
        adj[v][u]=1;
         
    }
    // matrix print of graph 
    for(int i=0;i<10;i++)
    {
         for(int j=0;j<10;j++)
         {
            cout<<adj[i][j]<<" ";
         }
         cout<<endl;
    }

}
