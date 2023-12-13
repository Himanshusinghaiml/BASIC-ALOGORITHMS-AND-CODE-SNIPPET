#include<bits/stdc++.h>
using namespace std;
void selection_sort(vector<int>&v)
{
    for(int i=0;i<v.size()-1;i++)
    {   int min=i;
        for(int j=i+1;j<v.size();j++)
        {
            if(v[j]<v[min])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            swap(v[i],v[min]);
        }
    }
    return ;
}
int main()
{  
    cout<<" enter the size : "<<endl;
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    selection_sort(v);
    cout<<" sorted array "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}