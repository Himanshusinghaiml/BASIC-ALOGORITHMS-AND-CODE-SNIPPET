// #include<iostream>
#include<bits/stdc++.h>
using namespace std;  
 void print(int n)
 {    bool flag=0;
    for(int i=2;i<n;i++)
    {
        for(int k=2;k<=sqrt(n);k++)
        {
             if(i%k==0)
             {
                flag=1; 
                break;
             }
        }
        if(flag==1)
        {
            cout<<i<<"-> not prime number "<<endl;
        }
        else{
            cout<<i<<"-> prime number "<<endl;
        }
    }
     
    
 }

int main()

{
     // check prime number or not
     cout<<" enter the number : ";
     int n;
      cin>>n; int i; bool flag=0;
      if(n==1)
      {
        flag=1;
      }
      for( i=2;i<=sqrt(n);i++)
      {
        if(n%i==0)
        {   
            flag=1;
            break;
        } 
      }
      if(flag==1)
        cout<<"  not prime number ";
        else 
        {
            cout<<" prime";
        }   
        cout<<" enter the number to print n th term"<<endl; 
        int number;
        cin>>number ;  
       print(number);
    return 0;

}