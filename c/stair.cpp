#include<iostream>
using namespace std;
int main()
{
    int n=26;//input
    int a=1;
    int b=2; 
    int sum;
    if(n>24)
    {
        cout<<"wrong input";
        return 0;
    }  
    for(int i=2;i<n;i++)
    {
        sum=a+b;
        a=b;
        b=sum;
    }
    cout<<sum;
}
