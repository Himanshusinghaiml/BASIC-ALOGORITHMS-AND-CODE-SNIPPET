#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={5,1,4,2,1,1,4,2,1,2,3 };
     
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<n<<endl;
    int hash[320]={0};
    for(int i=0;i<10;i++)
    {
           hash[arr[i]]++;
    }
    // for(int i=0;i<n;i++)
    // {
    //     cout<<hash[i]<<" ";
    // }
     for(int i=0;i<10;i++)
     {
        cout<<i<<" -> "<<hash[i]<<endl;
     }
    //  cout<<endl<<hash[500];
    int sum=0;
    for(int i=0;i<10;i++)
    {
        sum+=hash[i];
    }
    cout<<" the sum of value : "<<sum;
    return 0;
}