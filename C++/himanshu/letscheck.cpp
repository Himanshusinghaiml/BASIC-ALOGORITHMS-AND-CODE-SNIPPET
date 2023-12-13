#include<iostream>
using namespace std;
int main()
{   for (int j=0;j<=5;j++)
{ 
    int sum=0;
    int n;
    cout<<" enter the number whichever you want to sum : ";
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        sum=sum+i;
        cout<<i<<endl;
    }
    cout<<" total numbe of sum : "<<sum<<endl;
   int e = cout<<" if you want outside the program kindly press the botton for exit 0 ";
    
    if (e==0)
    {
        break;
    }
    
}return 0;
}