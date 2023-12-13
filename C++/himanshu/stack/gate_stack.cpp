#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int stack[10]; 
void push(  int stack[],int data)
{
    int top=-1; int n=10;
    if(top==n-1)
    {
        cout<<" overflow condition : "<<endl;
    }
    top++;
    stack[top]=data;
}
int main()
{
    int stack[10]; int n=10; int data=50;
    push( stack ,data);
     push( stack ,data);
    for(int i=0;i<n;i++)
    {
        cout<<stack[i]<<" ";
    }
}