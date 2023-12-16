#include<bits/stdc++.h>
using namespace std;
 
int maxi(int a, int b, int c) { 
    return max(max(a, b), c); 
} 
int gcd(int a,int b)
{
    if(b==0)return a;
    return gcd(b,a%b);
}
void pyramid(int n)
{
    for(int i=0;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {       cout<<" ";}
        
            for(int k=1;k<=2*i-1;k++)
            {
                cout<<"*";
            }
             
        
        cout<<endl;
    }
}
int main()
{
    int a=5,b=6,c=10;
    cout<<" max element in three varaible using recursion : "<<maxi(a,b,c)<<endl;
    cout<<"the gcd of the two number : "<<gcd(a,b);
    pyramid(c);
}