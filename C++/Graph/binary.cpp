#include<bits./stdc++.h>
using namespace std;
void linear(int arr[],int n,int data)
{
       for(int i=0;i<n;i++)
       {
        if(arr[i]==data)
        {
            cout<<" element found "<<arr[i]<<" at  index"<<i<<endl;return;
        }
       }
       cout<<" element not found"<<endl; return;
}
int main()
{
   int arr[6]={10,20,30,40,50,60};
     //int arr[6]={5,4,8,3,2,6};// binary search not working of tis array because this array is not sorted ;
   int n=6;
   int s=0;
   int e=n-1;
   cout<<" enter the data"<<endl;
   int data;
   cin>>data;
   cout<<endl<<" below linear search"<<endl;
   linear(arr,n,data);
    
   for(int i=0;i<n;i++)
   {
    cout<<i<<"->" <<arr[i]<<endl;
   }
   while(s<=e)
   {
    int mid=(s+e)/2;
    if(arr[mid]==data)
    {
        cout<<"element at found : "<<arr[mid]<<" index :"<<mid;
        return 0;
    }
    else if(arr[mid]<data)
    {
        s++;
    }
    else{
        e--;
    }
   }
   cout<<" element not found" ;
   

    return 0;
}