#include<iostream>
using namespace std;
int binarysearch(int arr[],int size,int key)
{
   int first=0;
   int last=size-1;
//    int mid=first+(last-first)/2;
   while(first<=last)
   {
    int mid=first+(last-first)/2;
    cout<<" mid element at index  : "<<mid<<endl;
     cout<<" mid element : "<<arr[mid]<<endl;
    if (arr[mid]==key){
    // {   cout<<" mid element : "<<arr[mid]<<endl;
        return mid;
    }
   if (arr[mid]<key) //if (key>arr[mid])
    {
        first=mid+1;
    }
    else
    {
        last=mid-1;
    }
    mid=first+(last-first)/2;
   }
   return -1;
}
// int binarysearch(int arr[],int size,int key)
// {
//     int start =0;
//     int end=size-1;
//     while (start<=end)
//     { 
//         int mid=start+(end-start)/2;
//         if (arr[mid]==key)
//         {
//             return mid;
//         }
//         // if (key>arr[mid])
//         if (arr[mid]<key)
//         {
//             start=mid+1; 
//         }
//         else
//         {
//             end=mid-1;
//         }
//         mid=start+(end-start)/2;
//     }
//     return -1;
// }
int main()
{   int arr[]={2,4,5,6,7,8,9};
    int size1= sizeof(arr)/sizeof(arr[0]);
    int key=8;
    cout<<" total size of element : "<<size1<<endl;
    for(int j=0;j<size1;j++)
    {
        cout<<j<<" : "<< arr[j]<<endl; 
    }
    int ans = binarysearch(arr,size1,key);
    cout<<"  found at index : "<< ans;
    return 0;

}