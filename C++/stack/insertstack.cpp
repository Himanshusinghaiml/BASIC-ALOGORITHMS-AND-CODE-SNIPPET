#include<stack>
#include<bits/stdc++.h>
using namespace std;
void find_min(stack<int>s)
{    int mini=INT_MAX;
     int n=s.size();

     while(!s.empty())
     {
        int x =s.top();
        mini=min(x,mini);
        s.pop();
     }
     cout<<" minimum element in the stack : "<<mini<<" "<<endl;
}
int main()
{
    stack<int>s;
    int arr[]={5,4,5,6,30,3};
    for(int i=0;i<6;i++)
    {
        s.push(arr[i]);
    }
    find_min(s);
    while(!s.empty())  // s.empty() return true if the stack is empty 
    {
        cout<<s.top()<<" ";
        s.pop();
    }
     
}