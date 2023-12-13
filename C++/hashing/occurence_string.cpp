#include<bits/stdc++.h>
using namespace std;
void freq()
{
    string s="himanshusinghhi";
    int hash[26]={0};
    int n=s.length();
    for(int i=0;i<n;i++)
    {
        hash[s[i]-'a']++;
        cout<<s[i]<<" ";
    }
    cout<<"\n";
    for(int i=0;i<20;i++)
    {
         cout<<hash[i]<<" ";
    }
    cout<<hash['h'-'a'];
}
int main()
{
    int arr[]={5,4,7,8,5,4,4,1,4,2,1,3,4,3};
    int hash[10]={0};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        hash[arr[i]]++;a
    }
    // for(int i=0;i<10;i++)
    // {
    //     cout<<i<<"->"<<hash[i]<<endl;
    // }
    cout<<endl<<" string frequency "<<endl;
    freq();
    return 0;
}