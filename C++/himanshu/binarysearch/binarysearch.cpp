#include<iostream>
using namespace std;
int binarysearch(int arr[],int size,int key)
{
    int start =0;
    int end=size-1;
    while (start<=end)
    { 
        int mid=start+(end-start)/2;
        if (arr[mid]==key)
        {
            return mid;
        }
        // if (key>arr[mid])
        if (arr[mid]<key)
        {
            start=mid+1; 
        }
        else
        {
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
    
}
int main()
{   
    int array[]={2,5,7,8,9,46,780};
    int length= sizeof(array)/sizeof(array[0]);
    for (int i=0;i<length;i++)
    {
        cout<<" this is array element "<< i<<" : "<< array[i] <<endl;
    }
     int found;
    cout<<" which element do you want to search : ";
    cin>>found;
    int ans=binarysearch(array,length,found);
    if (ans==-1)
    {
        cout<<" element not found ";
    }
    else{
        cout<<" yes found at index"<<" : "<< ans<<" : "<< found;
    } 
   
    return 0;
}