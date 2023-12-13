#include<bits/stdc++.h>
using namespace std;
int maxi_product(int arr[],int n)
{   int mult=1;
    int maxi=INT_MIN;
    for(int i=0;i<n;i++)
    {     mult=1;
        for(int j=0;j<n;j++)
        {      
            //  int arr[]={5,4,3,2};
            if(i==j)
            {continue;}
            else{ mult=mult*arr[j];}
            

        }
        maxi=max(mult,maxi);
    }
    return maxi;
}
int main()
{
      int arr[]={5,4,3,2};
      int n= sizeof(arr)/sizeof(arr[0]);
      cout<<maxi_product(arr,n);
      cout<<n;
}