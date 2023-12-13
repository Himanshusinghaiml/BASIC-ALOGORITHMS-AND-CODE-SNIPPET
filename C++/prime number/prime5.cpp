// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
   
//    int n;cin>>n; 
int flag=0;
//    if(n<=1) 
// flag=1;
for(int k=2;k<=100;k++)
{

    for(int i=2;i<k;i++)
    {
       if(k%i!=0)
        {
          flag=1;
         break;   
        }
       
    }
    if(flag==1) cout<<k<<" ";
}
    
//    if(flag==0)cout<<" prime number ";else cout<<" not prime number ";

    return 0;
}
 