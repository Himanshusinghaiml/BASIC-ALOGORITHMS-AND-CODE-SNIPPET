#include<bits/stdc++.h>
using namespace std;
int find(string s,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(s[i]==s[j])
            {
                return i;
            } 
        }
    }
}
void print_substring(string s,int n)
{
    char ch[50]; int k=0;
    for(int i=n;i<s.length();i++)
    {
        if(s[i]!=' ')
        {
            ch[k]=s[i];k++; 
        }
        else{
            break;
        }
    }
     for(int i=0;i<k;i++)
     {
        cout<<ch[i];
     }
}
int main()
{   // string
    // substring-> like @ cse,ec,civil 
    // print first occurence
    string s=" cse ec en cse ec aiml";
    int n=s.length();
    int store=find(s,n);
    print_substring(s,store);

}