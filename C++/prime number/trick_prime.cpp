#include<iostream>
using namespace std;
int main()
{  
    int n=7;
   cout<<" 2 3 5 7 11"<<" "; 
    
    for(int i=1;i<=25;i++)
    {
        int sub=6*i-1;
        int sum=6*i+1;  
         if(sub && sum >=50) break;
         if(sub%2!=0 and sub%3!=0 and sub%5!=0 and sub%7!=0 and sub%11!=0  )
         {
                      cout<<sub<<" ";  
         }
        
        if(   sum%5!=0 and  sum%3!=0 and  sum%2!=0 and  sum%7!=0 and sum%11!=0 )
        {    
            cout<<sum<<" ";
        }
         
    }
}