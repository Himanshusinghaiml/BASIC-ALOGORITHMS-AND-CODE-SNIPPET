#include<bits/stdc++.h>
 
using namespace std;
 


int main()
{     string s="himanshu";
    //    for(int i=0;i<s.length();i++)
    //    {
    //     cout<<s[i]<<endl;
    //    }
    // cout<<s<<endl;
       
      stack<char>S;
      for(int i=0;i<s.length();i++)

{
    S.push(s[i]);
}  
string ans=""; 
while(!S.empty())
{      
    //  char ch=S.top();
     ans.push_back(S.top());
     S.pop();
    
} 
 
cout<<" "<<ans <<endl;
 
    return 0;
}