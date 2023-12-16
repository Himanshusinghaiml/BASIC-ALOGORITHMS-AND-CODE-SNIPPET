#include<bits/stdc++.h>
using namespace std;
void print_subarrayO3(int arr[],int n)
{   int sum=0;
    int maxi=INT_MIN;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {        sum=0;
            for(int k=i;k<j;k++)
            {    
                 sum+=arr[k];
                 cout<<arr[k]<<" ";
            }
             cout<<"  ->  "<<sum;
            maxi=max(sum,maxi);
            cout<<endl;
        }
        cout<<endl;
    }
    cout<<" the maximum sum  subarray : "<<maxi;
}
void print_subarrayO2(int arr[],int n)
{
;
}
void kadens(int arr[],int n)
{
    ;
}
int main()
{
    int arr[]={5,7,-7,-1,8,9,7,4,10,-3};
    int n=sizeof(arr)/sizeof(arr[0]);
    print_subarrayO3(arr,n);
    print_subarrayO2(arr,n);
    kadens(arr,n);
}