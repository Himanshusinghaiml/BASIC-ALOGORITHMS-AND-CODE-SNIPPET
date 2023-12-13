#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int arr[8]={1,5,7,10,12,14,5,2};
    int n=8;  int ans=0;
    for(int i=0;i<n;i++)
    {
              int flag=0; 
     
            if(arr[i]==1)flag=1;
           for(int j=2;j<=arr[i]/2;j++)
            {
                 if(arr[i]%j==0)
                    {
                        flag=1;
                        break;
                    }
            }
            if(flag==0)
            {    cout<<arr[i]<<" ";
                  ans+=arr[i];
            }
    
    }
     cout<<endl<<ans;
     
}