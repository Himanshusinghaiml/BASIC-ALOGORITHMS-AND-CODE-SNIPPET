#include<iostream>
using namespace std;
int main()
{   int num;
    cout<<" enter the number  to check prime or not " ;
    cin>>num; int flag=0;
     for(int i=2;i<=num;i++)
     {
        if(num%i==0)
        {
             flag=1;
             cout<<flag;
        }
         
     }
     if(flag==0)
     {
        cout<<"prime number ";

     }
     else
     {
        cout<<" not prime";
     }



    return 0;
}