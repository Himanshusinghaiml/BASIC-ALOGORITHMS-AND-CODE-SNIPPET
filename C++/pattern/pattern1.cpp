#include<iostream>
using namespace std;
int main()
{    int n=4;
   
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    } 
    /*
1 
1 2 
1 2 3 
1 2 3 4 */
    cout<<endl<<endl;
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    /*
1 
2 2 
3 3 3 
4 4 4 4 */
 cout<<endl<<endl;
 int number=1;
 for(int i=1;i<=5;i++)
 {
    for(int j=1;j<=i;j++)
    {
        cout<<number<<" ";
        number++;
    }
     
    cout<<endl;
 }
     /* 
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 
*/
    return 0;
}