#include<iostream>
using namespace std;
int main()
{   
    int n=8;
    int maxi=0;
    for(int i=2;i<=n;i++)
    {
        while(n%i==0)
        {
            cout<<i<<" ";
            maxi=max(maxi,i);
            n=n/i;
        }
    }
    cout<<endl<<maxi;
    return 0;
}