#include<iostream>
using namespace std;
int main()
{
      cout<<" enter the number ";
      int n;cin>>n;
     int flag=0;
     if(n<=0 || n==1)
     {
        flag=1;
     }
     for(int i=2;i<=n/2;i++)
     {
        if(n%i==0) {
            flag=1;break;}
     }
     (flag==0)?cout<<" prime number ":cout<<" not prime number ";
}