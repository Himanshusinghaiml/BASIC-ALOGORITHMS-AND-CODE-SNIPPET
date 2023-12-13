// program for pair sum 
#include<iostream>
using namespace std;
int main()
{   int  arr[8]={5,6,7,2,3,5 }; int target=7;
    int l=sizeof(arr)/sizeof(arr[0]);
    int i=0;int j=l-1;  int sum=0;
    for(int i=0;i<6;i++)
    {
        cout<<i<<" "<< arr[i]<<endl;
    }
    // cout<<endl;
    while(i<j)
    {
        sum=arr[i]+arr[j];
        if (sum==target)
        {
            cout<<" yes element found at index -> "<<i<<" "<<j <<" : "<<sum<<endl; break;
        }
        if(sum<target)
        {
             i++;
        }
        else
        {
            j--;
        }
    }
    
    
    return 0;
}