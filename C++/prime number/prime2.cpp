#include<bits/stdc++.h>
using namespace std;
void prime(int n)
{      int store=n;
      int flag=0;
      if(n==1 or n==0)
      {
        flag=1;
      }
      for(int i=2;i<=sqrt(n);i++)
      {
        if(n%i==0)
        {
            flag=1; break;
        }
      }
    //   if(flag==0)cout<<n<<" ";
   static int maxi = 0;
    int n1=8;
    if(flag==0)
    {
        if(n1%n==0)
        {
            maxi=max(maxi,n);
        }
        
        
    }
    if(store==n1) cout<<" hhhh : "<<maxi;
     
}
int main()
{
    for(int i=1;i<=8;i++)
    {
        prime(i);
    }
}