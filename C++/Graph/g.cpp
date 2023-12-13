#include<bits/stdc++.h>
using namespace std;
int main()
{    
    cout<<" enter the no of nodes and edges"<<endl;
    int n,e; 
    cin>>n>>e;
    vector<int>v[n];
    for(int i=0;i<e;i++)
    {
        cout<<" enter the two edges :"<<endl;
        int x,y;cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);

    }
    for(int i=0;i<n;i++)
    {    cout<<i<<" ->";
    //     for(auto i: v[i])
    // {
    //     cout<<i<<" ";
    // }
    for(int j=0;j<2;j++)
    {
        cout<<v[i][j]<<" ";
    }
    cout<<endl;
    }
     
    
    return 0;
}