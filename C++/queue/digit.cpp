#include<bits/stdc++.h>
using namespace std;
int main()
{   int num=4751;  int sum=0;
    while(num!=0)
    {
        int rem=num%10;
        sum=sum+rem;
        num=num/10;
    }
    cout<<" addtion  of  475 : "<<sum<<endl;
    int sum1=sum;  int store = sum;int final=0;
    while(sum1!=0)
    {
        int rem=sum1%10;
        final=final+rem;
        sum1=sum1/10;

    }
    cout<<"  sum of  again "<< store  <<" : "<<final<<endl;
    return 0;
}