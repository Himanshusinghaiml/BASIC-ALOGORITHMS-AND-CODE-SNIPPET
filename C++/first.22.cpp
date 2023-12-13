#include<bits/stdc++.h>
using namespace std;
int main()
{
  string   s = "A man, a plan, a canal: Panama";
  string s1="";
  int n=s.size();
          for(int i=0;i<n;i++)
        {
          if(s[i]>=65 and s[i]<=90)
          {
              int ch=s[i]+32;
              s1.push_back(char(ch));
          }
           else if(s[i]>=97 and s[i]<=122)
           {
               s1.push_back(s[i]);
           }
           else
           {
               continue;
           }
        }
        cout<<s1<<"ffv";
}