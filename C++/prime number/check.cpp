#include<iostream>
using namespace std;
int main()
{
    //   int n=163;
    int n=279;
    // int n=21;
      while(n!=0)
      {
        int rem=n%10;
        int t=n/10;
        int rem1=t%10;
        cout<<rem1<<" "<<rem<<endl;
        if(rem1>rem)n--;
        else 
        {
            cout<<n;break;
        }
      }
}