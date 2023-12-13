#include<iostream>
using namespace std;
int main()
{   int n=123; int rem;  int sum=0; 
   while (n!=0)
   {
    rem=n%10;
    cout<<rem<<" ";
    sum=sum+rem;
    
     
    n=n/10;
     
   }
   cout<<endl<<rem<<endl<<" adiition of given number  :  "<<sum;
    return 0;
}