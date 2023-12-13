#include<iostream>
using namespace std;
int main()
{
    for(int i=4;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    /*       
* * * * 
* * * 
* * 
* 
    */
 
     for(int i=4;i>=1;i--)
     {
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        } cout<<endl;
     }
     /* 
1 2 3 4 
1 2 3 
1 2 
1 
     */
    cout<<endl<<endl;
    int n=5;
     

     cout<<endl<<endl;
     for(int i = 1; i <= n; i++)
  {
    // n-i leading spaces
    for(int j = 0; j < n - i; j++)
        cout<<" ";
       
    // i elements
    for(int j = 1; j <= i; j++)
      cout<<"* ";
    cout<<endl;
  }
    return 0;
}