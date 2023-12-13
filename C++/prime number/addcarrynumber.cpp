#include<iostream>
using namespace std;
int main()
{
    int a=2138;
    int b=914;
    int ans=0;
    int carry=0;
    while (a!=0 || b!=0)
    {
       int rem1=a%10;
       int rem2=b%10;
       int sum=rem1+rem2+carry;
       int y;
        
       if(sum>9)
       {
          y=sum%10;
          carry=1;
       }
       else{
        carry=0;
       }
       ans=ans*10+sum;
       a/=10;
       b/=10;
    }
    cout<<ans;
    
}