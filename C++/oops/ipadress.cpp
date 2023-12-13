#include<iostream>
#include<bits\stdc++.h>
using namespace std;
void prints()
{
    string n="25955";
    for(int i=0;i<n.length();i++)
    {   int ans=n[i]-'0';
        cout<< ans<<" ";
         
    }
    cout<<endl<<n.length();
}
 void range()
 {
    string name="66";
    int l=name.size();
    cout<<endl<<" the length of the sting : "<<l<<endl;
 }
int main()
{    
    unordered_set<string>st;
    for(int i=0;i<256;i++)
    {
        st.insert(to_string(i));
    }
    //unordered_set<string>::iterator itr;
    for (auto it = st.begin(); it !=st.end(); it++)
    {
        cout << *(it)<<endl;
    }
    range();
    prints();

    return 0;
}