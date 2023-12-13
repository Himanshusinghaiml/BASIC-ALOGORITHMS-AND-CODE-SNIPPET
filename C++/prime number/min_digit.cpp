#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// program for calculate each minimum  digit  and them and in the last print sum all min digit ; 
int sum;//global varible 
int main()
{
    int n;
    cin>>n;
    int arr[n];
     //int sum=0; local variable intiliaze with 0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {   
        int maxi=arr[i]%10;
        while(arr[i]!=0)
        {
             int rem=arr[i]%10;
             if(rem<maxi) maxi=rem;// without  in built function use and find min
            //  maxi=min(maxi,rem);
             arr[i]=arr[i]/10;
        }
        sum+=maxi;
    }
    cout<<sum;
}