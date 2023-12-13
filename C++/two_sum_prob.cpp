#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={5,4,7,8,9,5,2};
    int target=14;
    int n=sizeof(arr)/sizeof(arr[0]);
    unordered_map<int,int>m;
    for(int i=0;i<n;i++)
    {
        m[arr[i]]=i;
    }
    for(int i=0;i<n;i++)
    {
         int sub=target-arr[i];
         if(m.count(sub) && m[sub]!=i)
         {
            cout <<i<<" -> "<<arr[i]<<endl<< "and : "<<m[sub]<<" -> "<<arr[m[sub]];return 0;
         }
    }
   
}