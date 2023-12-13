#include<bits/stdc++.h>
using namespace std;
 
void solve(string s,int index)
{
    if(index>=s.length())
    {
        cout<<s<<" ";  return ;

    }
    for(int i=index;i<s.length();i++)
    {
    swap(s[index],s[i]);
    solve(s,index+1);
    swap(s[index],s[i]);
    }
    
    
}
void print()
{
    string s="";
    string A="aabc";
    
		    for(int i=0;i<A.length();i++)
		    {
		        s+=A[i];
                cout<<s<<" ";
		    }
}
int main()
{
    string s="abc";
    solve(s,0);
    cout<<endl<<endl;
    print();
    return 0;
     
}
/* 
      void solve(string S,int index,vector<string>&ans)
    {
        if(index >=S.size())
        {
            ans.push_back(S);
            return;
        }
        for(int j=index;j<S.size();j++)
        {
            swap(S[index],S[j]);
            solve(S,index+1,ans);
            // backtracking 
            swap(S[index],S[j]);
        }
    }
    
    vector<string> permutation(string S)
    {
        //Your code here
        vector<string>ans;
        int index=0;
        solve(S,index,ans);
        sort(ans.begin(),ans.end());
        return ans;
        
*/