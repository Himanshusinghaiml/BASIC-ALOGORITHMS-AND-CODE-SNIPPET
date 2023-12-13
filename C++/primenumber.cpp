#include<bits/stdc++.h>
using namespace std;
bool prime(int n)
{  // O(sqrt(n)) time complexity
    if(n<=1)return false;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)  return false;
    }
    return true;
}
int main()
{
    // wap to check prime number or not 
    int n; cout<<"enter the number ";cin>>n;
    int flag=0;  // complexity O(N)
    for(int i=2;i<n;i++)
    {
         if(n%i==0) 
         {
             flag=1;break;
         }
          
    }
    if(flag)cout<<" not prime number";else cout<<" prime number";
    cout<<endl<<"another approach "<<endl;
    prime(n)?cout<<"prime number":cout<<" not prime ";
    return 0;
}