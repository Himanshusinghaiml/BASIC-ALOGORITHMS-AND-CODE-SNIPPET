#include<iostream>
using namespace std;
int main()
{
    int a[3]={6,8,9};
    int n=3;
    int last=n-1;
    // for(int i=last;i>=0;i--)
    for(int i=2;i>=0;i--)
        {
            if(a[i]==9)
            {   
                cout<<a[i]<<" ";
                a[i]=0;
                cout<<a[i]<<" ";
            }
             cout<<endl<<a[last]<<" ";
            if(a[i]<9)
            {
                a[i]++;break;
            }
        }
        // cout<<endl<<a[last]<<" ";
        cout<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
}