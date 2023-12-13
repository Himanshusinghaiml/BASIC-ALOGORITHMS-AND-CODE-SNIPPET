#include<bits/stdc++.h>
using namespace std;
int power(int base,int p)
{  
    if(p==1)
    {
        return base;
    }
    long  ans = power(base,p/2);
    ans=(ans*ans);
     
}
 void check()
 {
    string s="2",t="5";
    cout<<endl<<s<<endl;
    for(int i=0;i<s.size();i++)
    {
        cout<<s[i]<<" ";
    }
    int num1=stoi(s),num2=stoi(t);
    cout<<" the number of multiply string :"<<num1*num2;
     
 }
int main()
{   string s="himanshu",p="singh";
     s[0]='s';
     //s="tikku"; it is ohk;
     s=s+p;
    for(int i=0;i<s.size();i++)
    {
        cout<<s[i]<<" ";
    }
    check(); int ans=power(2,5);
    cout<<endl<<" the ans of recursion ; "<<ans;
    return 0;
}