#include<bits/stdc++.h>
using namespace std;
int main()
{
    // int arr[7]={1,2,3,4,5,6,7};
    int n;cin>>n;
    int arr[n]; 
    int temp[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<" enter the number  of d :"<<endl;
    int d;
    cin>>d;
     int b=d; int k=0;
    while(d<n)
    {
        temp[k]=arr[d]; 
        d++; k++;
        if(d==n)
        {
            d=0;
        }
        if(d==b)break;   
    }
   
    for(int i=0;i<n;i++)
    {
        cout<<temp[i]<<" ";  
    }
    return 0;
}