#include<iostream>
using namespace std;
int main()
{
    int x=5;
    // while(--x)
    // {
    //     cout<<" himanshu singh "<<x<< endl;
    // }
    while(x)
    {
        cout<<" himanshu singh : "<<x--<<endl;
        
    }
    cout<<" here "<<endl;
    int n=15;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}