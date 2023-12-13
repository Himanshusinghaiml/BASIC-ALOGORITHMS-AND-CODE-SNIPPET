#include<bits/stdc++.h>
using namespace std;
class graph
{    public:
     unordered_map<int,list<int>>adj;
     void addedge(int u,int v, bool direction )
     {
        adj[u].push_back(v);
     if(direction==0)
     {
        adj[v].push_back(u);
     } 
     }
void printadj()
{
    for(auto i: adj)
    {
        cout<<i.first<<" ->";
        for(auto j:i.second)
        {
            cout<<j<<", ";
        }
        cout<<endl;
    }
}

};
int main()
{    
    int n;
    cout<<" enter the no of nodes : "  <<endl;
    cin>>n;
    int m;
    cout<<" enter the no of edges : "<<endl;
    cin>>m;
    int n1;
    cout<<" for directed graph press 1 , for undirected press 0 : "<<endl;
    cin>>n1;
    graph g;
    for(int i=0;i<m;i++)
    {
        int u,v;
        cout<<" enter the two edges  one by one : "<<endl;
        cin>>u>>v;
        g.addedge(u,v,n1);
 
    }
 g.printadj();

    return 0;
}