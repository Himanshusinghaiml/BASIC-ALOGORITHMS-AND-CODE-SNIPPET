/* maximum product subarray
inpt=[-1,-3,-10,0,60]  */
#include<bits/stdc++.h>
using namespace std;
void print_subarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
      for(int j=i+1;j<n;j++)
      {
         for(int k=j;k<=j;k++)
         {
          cout<<arr[k]<<" ";
         }
      }
    }
}
int main()
{
  unordered_map<int,int>m;
  int arr[]={2,3,6,3,4,1,3,6};
  int n=8;  
  for(int i=0;i<n;i++)
  {
    m[arr[i]]++;
  }
  
 for(auto  i:m)
 {
     if(i.second>1)
     {
        // cout<<i.first<<" -> "<<i.second<<endl;
     }
 }
 int arr1[5]={5,10,15,20,25}; int n1=5;
 print_subarray(arr1,n1);
}

