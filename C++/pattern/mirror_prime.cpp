#include<iostream>
using namespace std;
int main()
{    int a=1; int m=0; int h=4;
    for(int i=1;i<=h;i++)
    {
        for(int j=1;j<=h-i;j++)cout<<" ";
        for(int k=1;k<=i+m;k+=2)
        {
             cout<<k<<"";
             
        }m++;
        cout<<" "<<endl;
    }
    return 0;// question asked 
}