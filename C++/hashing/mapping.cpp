#include<bits/stdc++.h>
using namespace std;
int main()
{
//    cout<<" enter the number :"<<endl;
//    int n;
//    cin>>n;
//    int arr[n];
   int arr[]={1,4,2,4,5,2,3,1,4,7,4,2,4};
   int n=sizeof(arr)/sizeof(arr[0]);
 
// for(int i=0;i<n;i++)
// {   cout<<" enter the number :"<<endl;
//     cin>>arr[i];
// }
   map<int,int>m;
   for(int i=0;i<n;i++)
   {
      m[arr[i]]++;
   }
   cout<<" hashing output : "<<endl;
//    for(int i=1;i<m.size();i++)
//    {
//     cout<<i<<" -> "<<m[i]<<endl;
//    }
  cout<<" iterator through accessing element :"<<endl; 
// for(auto i:m)
// {
//     cout<<i.first<<" ->"<<i.second<<endl;
// }
}