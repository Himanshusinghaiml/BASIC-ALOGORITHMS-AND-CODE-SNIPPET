#include<iostream>
using namespace std;
long long binary(long long n)
{
    if(n<=1)return n;
    return n%2 + binary(n/2)*10;
}
int main()
{
     cout<<"enter the number ";
     long long  n;cin>>n;
     cout<<binary(n);
}